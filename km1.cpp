#include <stdio.h>
int main()
{
 int a,b,c,d;
 printf("Enter the number it will be measured in kilometer:");
 scanf("%d",&a);
 b=1000*a;
 c=100000*a;
 d=1000000*a;
 printf("The conversion of given value from kilometer to meter is: %d",b);
 printf("The conversion of given value from kilometer to centimeter: %d",c);
 printf("The conversion of given value from kilometer to millimeter: %d",d);
 return(0);
 
}
