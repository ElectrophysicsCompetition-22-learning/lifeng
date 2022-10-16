#include <stdio.h>
int main()
{
	int age;
	int math,english,c;
	printf("请输入学生基本信息：");
	scanf("%d",&age);
	scanf("%d%d%d",&math,&english,&c);
	printf("姓名\t性别\t年龄\t数学\t英语\tC语言\n");
	printf("张雪\t女\t");
	printf("%d\t",age);
	printf("%d\t%d\t%d\n",math,english,c); 
}
