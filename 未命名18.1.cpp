#include <stdio.h>
int main()
{
	int n,scr,ave,i=1,sum=0;
	printf("��������ί������");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("��Ϊ�����Ӵ�֣�",scr);
		scanf("%d",&scr);
		sum+=scr;
		i++;
	} 
	ave=sum/n;
	printf("���������ճɼ�����ί���ƽ���֣�%d",ave);
}
