#ifndef _ESP8266_H_
#define _ESP8266_H_


void ESP8266_Init(void);  //��ʼ��ESP8266
void Usart2_Init(unsigned int baud); //����2��ʼ��,�趨������,ָ���շ�����
void ESP8266_Clear(void);  //8266��ջ���
void ESP8266_SendData(unsigned char *data, unsigned short len); //8266��������
unsigned char *ESP8266_GetIPD(unsigned short timeOut);         //��ȡƽ̨���ص�����
void Usart2_SendString(unsigned char *str, unsigned short len); //�������ݷ���

#endif

