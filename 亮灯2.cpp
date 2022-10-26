#include <reg51.h>
#define uint unsigned int
#define uchar unsigned char
sbit BUTTON=P0^1;//按键的位置
void DELAY(uint x)
{
uchar s,j;
for(s=0;s<x;s++)
for(j=0;j<114;j++);
}
void main()
{
uint led=0;
while(1)
{
if(BUTTON==0)
{
led++;
if(led==1)//第一次按键按下
{
P2=0XFE；//1111 1110 第一个灯亮
DELAY(500)；//延时
while(BUTTON!=0)//等待按键放开
{
P2=0xff;/1111 1111灯灭
DELAY(500)//延时
}
}
if(led==2)//第二次按键按下
{
led=0;//要给次数初始化
P2=0XFC；//1111 1101第二个灯亮
DELAY(500)；//延时
while(BUTTON!=0)//等待按键放开
{
P2=0xff;//1111 1111第二个灯灭
DELAY(500)//延时
}
}
}
}
