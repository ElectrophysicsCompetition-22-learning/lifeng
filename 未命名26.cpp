#include <stdio.h>
int main()
{  int i=6, a, b;
   printf("%d\n", ++i);
   printf("%d\n", i++);
   a=--i; printf("%d\n", a);
   b=i--; printf("%d\n", b);
   printf("%d\n", -i++);
   printf("i=%d\n", i);
}

