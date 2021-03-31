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

DHT11_Data_TypeDef DHT11_Data; //��ʪ�Ƚṹ�����
float value_light = 0.0; 	//���ն�
float value_mq2 = 0.0;		//����Ũ��
float value_mq7 = 0.0;		//COŨ��
float value_sr04 = 0.0;		//����������

int max_mq7 = 50;			//����Ũ����ֵ
unsigned char status_sr501 = 0;		//��������⵽��ֵ
unsigned char LED_Light;				//PWM�ƹ�����

unsigned int  time = 0; // ms ��ʱ���� 
void Hardware_Init(void); //Ӳ����ʼ��
void Net_Init(void); //�����ʼ��

int main(void)
{
	unsigned char *dataPtr = NULL;  //��ָ��
	char str[] = "";  //ת�������ʾ
  GENERAL_TIM_Init();				//ϵͳ��ʱ����ʼ��
	delay_init();			        //��ʱ������ʼ��
	
	//��ΧӲ����ʼ��
	LCD_Init();	   //Һ������ʼ��
	LCD_Clear(BLUE);  //��ȫ�� 
	Gui_DrawFont_GBK16(30,10,GREEN,BLUE,(u8 *)"�����ɹ�");
	Gui_DrawFont_GBK16(10,30,RED,BLUE,(u8 *)"�豸���г�ʼ��");
	Usart1_Init(115200);	 		//����1��ʼ��Ϊ115200
	Usart2_Init(115200); 	    //����2������ESP8266��
	LED_Init();				//LED��ʼ��
	SR501_Init();			//�������͵�
	Hcsr04Init();			//���������	
	ADCx_Init();			 //ADC   DMA��ʼ��
	DHT11_GPIO_Config();	//DHT11��ʪ�ȴ�������ʼ��
	BH1750_Init();			//����
	KEY_Init();         //����������ʼ��
	BEEP_Init();        //��������ʼ��
	PWM_TIM_Init();			//PWMƵ��=72000K/20*180=20Khz
	TIM_SetCompare3(TIM3,0);	 
	Gui_DrawFont_GBK16(10,50,GREEN,BLUE,(u8*)"�豸��ʼ�����");
	Gui_DrawFont_GBK16(10,70,RED,BLUE,(u8*)"������������....");
	
  //�����ʼ��
	ESP8266_Init();					//��ʼ��ESP8266
	while(OneNet_DevLink())	//����OneNET
	delay_ms(500);
	Gui_DrawFont_GBK16(10,90,GREEN,BLUE,(u8*)"�����������");
	delay_ms(2000);

	LCD_Clear(BLACK);      //��ȫ��
 	Gui_DrawFont_GBK16(25,4,RED,BLACK,(u8 *)" ������� ");
	while(1)
	{	 
		 //��������
		dataPtr = ESP8266_GetIPD(0);
		
		if(dataPtr != NULL)
		 {
			OneNet_RevPro(dataPtr);
		 }	
    /*���նȴ�������ȡ����*/			
		value_light = LIght_Intensity();
		sprintf(str, "���գ�%.1f Lx  ",value_light);
		Gui_DrawFont_GBK16(4,30,YELLOW,BLACK,(u8 *)str);
		/* ��ʪ�ȴ�������ȡ����*/
		if( Read_DHT11(&DHT11_Data)==SUCCESS)
			{
				sprintf(str, "�¶ȣ�%d.%d �� ",DHT11_Data.temp_int,DHT11_Data.temp_deci);
				Gui_DrawFont_GBK16(4,50,GRAY0,BLACK,(u8 *)str);
				sprintf(str, "ʪ�ȣ�%d.%d %cRH ",DHT11_Data.humi_int,DHT11_Data.humi_deci,'%');
				Gui_DrawFont_GBK16(4,70,GREEN,BLACK,(u8 *)str);
			}
			else
			{
				printf("Read DHT11 ERROR!\r\n");//��ȡ����ʧ�ܣ���ӡ ERROR.
				Gui_DrawFont_GBK16(4,50,GRAY0,BLACK,(u8 *)"ERROR!");
				Gui_DrawFont_GBK16(4,70,GREEN,BLACK,(u8 *)"ERROR!");
			}			
		/*MQ2��������ȡ��������*/	
		value_mq2 = MQ2_GetPPM();
		sprintf(str, "����%.1f ppm ",value_mq2);
		Gui_DrawFont_GBK16(4,90,BLUE,BLACK,(u8 *)str);
		/*MQ7��������ȡһ����̼����*/	
		value_mq7 = MQ7_GetPPM();
		sprintf(str, " CO ��%.1f ppm ",value_mq7);
		Gui_DrawFont_GBK16(4,110,RED,BLACK,(u8 *)str);
		/*����������ȡ���루CM��*/	
		value_sr04 = Hcsr04GetLength();
		/*������*/	
		status_sr501 = SR501_Check();

		//���ڵƹ�����
		//PWM_Control(LED_Light);
			PWM_Control(50);
		//�ж�һ����̼Ũ���Ƿ񳬹�����
		if((int)value_mq7 >= max_mq7)
		{
			BEEP_SetOnOff(1); //����������
		}
		else
		{
			BEEP_SetOnOff(0);//Ĭ�Ϸ���������
		}
		
		delay_ms(1000);
		delay_ms(1000);
		OneNet_SendData();	//��������
		ESP8266_Clear();  //8266��ջ���	
	}
}

