#include <stdio.h>
int main()
{
int a,b;
printf("Enter the values a and b:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The values of a and b after swapping are: %d,%d:",a,b);
return(0);
}
