#ifndef _ONENET_H_
#define _ONENET_H_



_Bool OneNet_DevLink(void); //	函数功能：	与onenet创建连接
void OneNet_SendData(void); //	函数功能：	上传数据到平台
void OneNet_RevPro(unsigned char *cmd);//	函数功能：	平台返回数据检测

#endif
