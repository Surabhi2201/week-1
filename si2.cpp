#include <stdio.h>
#include <math.h>
int main()
{
float p,r,t,s,c,a;
printf("Enter the principal value:");
scanf("%f",&p);
printf("Enter the rate :");
scanf("%f",&r);
printf("Enter the time period:");
scanf("%f",&t);
s=(p*r*t)/100;
printf("The simple interest is: %f",s);
a=p*(pow(1+(float)(0.01*r),t));
c=a-p;
printf("The compound interest is: %f",c);
return(0);


}
