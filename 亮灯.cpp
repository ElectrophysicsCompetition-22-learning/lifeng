#include <reg51.h>
sbit P30=P3^0;
int delay(int)
{
	unsigned int i;
	for(i=0;i<30000;i++);
}
int main(int)
{
	unsigned char keynum=0;
	while(1)
	{
		if(P30==0)
		{
			delay();
			if(P30==0)
			{
				keynum++;
			}
			if(keynum==9)
			{
				keynum=1;
			}
		}
	}
	switch(keynum)
	{
		case 1:P1=0xfd;      break;
		case 2:P1=0xfd;      break;
		case 3:P1=0XFD;      break;
		case 4:P1=0xf7;      break;
		case 5:P1=0xef;      break;
		case 6:P1=0xdf;      break;
		case 7:P1=0xbf;      break;
		case 8:P1=0x7f;      break;
	}
}
}
