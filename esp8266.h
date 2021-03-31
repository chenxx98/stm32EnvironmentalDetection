#ifndef _ESP8266_H_
#define _ESP8266_H_


void ESP8266_Init(void);  //初始化ESP8266
void Usart2_Init(unsigned int baud); //串口2初始化,设定波特率,指定收发引脚
void ESP8266_Clear(void);  //8266清空缓存
void ESP8266_SendData(unsigned char *data, unsigned short len); //8266发送数据
unsigned char *ESP8266_GetIPD(unsigned short timeOut);         //获取平台返回的数据
void Usart2_SendString(unsigned char *str, unsigned short len); //串口数据发送

#endif

