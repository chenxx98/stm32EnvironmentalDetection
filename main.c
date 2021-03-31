#include <string.h>
#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "timer.h"

#include "LCD.h"	
#include "tft.h"
#include "adc_dma.h"
#include "onenet.h" 
#include "esp8266.h"
#include "key.h"
#include "led.h"
#include "beep.h"
#include "pwm.h"
#include "bh1750.h"
#include "dht11.h" 	
#include "mq2.h"
#include "mq7.h"
#include "hc_sr501.h"
#include "hc_sr04.h"

DHT11_Data_TypeDef DHT11_Data; //温湿度结构体变量
float value_light = 0.0; 	//光照度
float value_mq2 = 0.0;		//烟雾浓度
float value_mq7 = 0.0;		//CO浓度
float value_sr04 = 0.0;		//超声波距离

int max_mq7 = 50;			//烟雾浓度阈值
unsigned char status_sr501 = 0;		//人体红外检测到的值
unsigned char LED_Light;				//PWM灯光亮度

unsigned int  time = 0; // ms 计时变量 
void Hardware_Init(void); //硬件初始化
void Net_Init(void); //网络初始化

int main(void)
{
	unsigned char *dataPtr = NULL;  //空指针
	char str[] = "";  //转换输出显示
  GENERAL_TIM_Init();				//系统定时器初始化
	delay_init();			        //延时函数初始化
	
	//外围硬件初始化
	LCD_Init();	   //液晶屏初始化
	LCD_Clear(BLUE);  //清全屏 
	Gui_DrawFont_GBK16(30,10,GREEN,BLUE,(u8 *)"开机成功");
	Gui_DrawFont_GBK16(10,30,RED,BLUE,(u8 *)"设备进行初始化");
	Usart1_Init(115200);	 		//串口1初始化为115200
	Usart2_Init(115200); 	    //串口2，驱动ESP8266用
	LED_Init();				//LED初始化
	SR501_Init();			//红外热释电
	Hcsr04Init();			//超声波测距	
	ADCx_Init();			 //ADC   DMA初始化
	DHT11_GPIO_Config();	//DHT11温湿度传感器初始化
	BH1750_Init();			//光照
	KEY_Init();         //配网按键初始化
	BEEP_Init();        //蜂鸣器初始化
	PWM_TIM_Init();			//PWM频率=72000K/20*180=20Khz
	TIM_SetCompare3(TIM3,0);	 
	Gui_DrawFont_GBK16(10,50,GREEN,BLUE,(u8*)"设备初始化完成");
	Gui_DrawFont_GBK16(10,70,RED,BLUE,(u8*)"正在连接网络....");
	
  //网络初始化
	ESP8266_Init();					//初始化ESP8266
	while(OneNet_DevLink())	//接入OneNET
	delay_ms(500);
	Gui_DrawFont_GBK16(10,90,GREEN,BLUE,(u8*)"网络连接完成");
	delay_ms(2000);

	LCD_Clear(BLACK);      //清全屏
 	Gui_DrawFont_GBK16(25,4,RED,BLACK,(u8 *)" 监测数据 ");
	while(1)
	{	 
		 //接收数据
		dataPtr = ESP8266_GetIPD(0);
		
		if(dataPtr != NULL)
		 {
			OneNet_RevPro(dataPtr);
		 }	
    /*光照度传感器获取数据*/			
		value_light = LIght_Intensity();
		sprintf(str, "光照：%.1f Lx  ",value_light);
		Gui_DrawFont_GBK16(4,30,YELLOW,BLACK,(u8 *)str);
		/* 温湿度传感器获取数据*/
		if( Read_DHT11(&DHT11_Data)==SUCCESS)
			{
				sprintf(str, "温度：%d.%d ℃ ",DHT11_Data.temp_int,DHT11_Data.temp_deci);
				Gui_DrawFont_GBK16(4,50,GRAY0,BLACK,(u8 *)str);
				sprintf(str, "湿度：%d.%d %cRH ",DHT11_Data.humi_int,DHT11_Data.humi_deci,'%');
				Gui_DrawFont_GBK16(4,70,GREEN,BLACK,(u8 *)str);
			}
			else
			{
				printf("Read DHT11 ERROR!\r\n");//读取数据失败，打印 ERROR.
				Gui_DrawFont_GBK16(4,50,GRAY0,BLACK,(u8 *)"ERROR!");
				Gui_DrawFont_GBK16(4,70,GREEN,BLACK,(u8 *)"ERROR!");
			}			
		/*MQ2传感器获取烟雾数据*/	
		value_mq2 = MQ2_GetPPM();
		sprintf(str, "烟雾：%.1f ppm ",value_mq2);
		Gui_DrawFont_GBK16(4,90,BLUE,BLACK,(u8 *)str);
		/*MQ7传感器获取一氧化碳数据*/	
		value_mq7 = MQ7_GetPPM();
		sprintf(str, " CO ：%.1f ppm ",value_mq7);
		Gui_DrawFont_GBK16(4,110,RED,BLACK,(u8 *)str);
		/*超声波测距获取距离（CM）*/	
		value_sr04 = Hcsr04GetLength();
		/*人体检测*/	
		status_sr501 = SR501_Check();

		//调节灯光亮度
		//PWM_Control(LED_Light);
			PWM_Control(50);
		//判断一氧化碳浓度是否超过上限
		if((int)value_mq7 >= max_mq7)
		{
			BEEP_SetOnOff(1); //蜂鸣器报警
		}
		else
		{
			BEEP_SetOnOff(0);//默认蜂鸣器静音
		}
		
		delay_ms(1000);
		delay_ms(1000);
		OneNet_SendData();	//发送数据
		ESP8266_Clear();  //8266清空缓存	
	}
}

