#include<stdio.h>
int main()
{
	float score;
	scanf("%f",&score);
	switch(=(int)score/10)
	{
		case  10: 
		case  9: printf("A or ��\n");break;
		case  8: printf("B or ��\n");break;
		case  7: printf("C or ��\n");break;
		case  6: printf("D or ���� \n");break;
		default  : printf("E or������\n");
	}
}
