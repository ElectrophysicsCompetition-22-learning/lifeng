#include <stdio.h>
#include <math.h>
int main ( )                 
{
 double a,b,c,s,area;
   printf("please enter a,b,c:");
   scanf("%lf,%lf,%lf",&a,&b,&c);
   if (a+b>c && b+c>a && c+a>b) 
   {
      s=0.5*(a+b+c);
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%6.2f\n",area);
   } 
   else  printf("It is not a trilateral.\n");
}

