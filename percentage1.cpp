#include <stdio.h>
int main()
{
int a,b,c,d,e,f ;
printf("Enter the marks scored in maths:");
scanf("%d", &a);
printf("Enter the marks scored in physics:");
scanf("%d",&b);
printf("Enter the marks scored in chemistry:");
scanf("%d", &c);
printf("Enter the marks scored in Informatics Practices:");
scanf("%d", &d);
printf("Enter the marks scored in English:");
scanf("%d",&e);
f=(a+b+c+d+e)/5;
printf("The percentage scored by the student is %d %%",f);
return(0);

}
