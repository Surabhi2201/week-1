#include <stdio.h>
int main()
{
 int a,b,t;
 printf("Enter two values a and b:");
 scanf("%d%d",&a,&b);
 t=a+b;
 a=t-a;
 b=t-b;
 printf("After exchanging values of a and b: %d,%d",a,b);
 return(0);	
}
