#include <stdio.h>
int main()
{
	char a;
	printf("请输入一个小写字母:");
	a=getchar();
	printf("该字母对应的大写字母是:");
	putchar(a-32);
}
