#include <reg51.h>
#define uint unsigned int
#define uchar unsigned char
sbit BUTTON=P0^1;//������λ��
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
if(led==1)//��һ�ΰ�������
{
P2=0XFE��//1111 1110 ��һ������
DELAY(500)��//��ʱ
while(BUTTON!=0)//�ȴ������ſ�
{
P2=0xff;/1111 1111����
DELAY(500)//��ʱ
}
}
if(led==2)//�ڶ��ΰ�������
{
led=0;//Ҫ��������ʼ��
P2=0XFC��//1111 1101�ڶ�������
DELAY(500)��//��ʱ
while(BUTTON!=0)//�ȴ������ſ�
{
P2=0xff;//1111 1111�ڶ�������
DELAY(500)//��ʱ
}
}
}
}
