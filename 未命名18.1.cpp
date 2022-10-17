#include <stdio.h>
int main()
{
	int n,scr,ave,i=1,sum=0;
	printf("请输入评委人数；");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("请为参赛队打分；",scr);
		scanf("%d",&scr);
		sum+=scr;
		i++;
	} 
	ave=sum/n;
	printf("参赛队最终成绩是评委打分平均分；%d",ave);
}
