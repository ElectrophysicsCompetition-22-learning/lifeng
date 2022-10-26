#include <stdio.h>
int main()
{
	float score,sum=0,ave;int i,n=0;
	for(i=1;i<6;i++)
	{
		printf("score:");scanf("%f",&score);
		if(score<60)
		{
			printf("FAIL:%7.2f\n",score);
			  continue;
		}
		sum=sum+score;n=n+1;
	}
	ave =sum/n;
	printf("n=%d,ave=%7.2f\n",n,ave);
}
