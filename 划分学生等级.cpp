#include<stdio.h>
int main()
{
	float score;
	scanf("%f",&score);
	switch(=(int)score/10)
	{
		case  10: 
		case  9: printf("A or 优\n");break;
		case  8: printf("B or 良\n");break;
		case  7: printf("C or 中\n");break;
		case  6: printf("D or 及格 \n");break;
		default  : printf("E or不及格\n");
	}
}
