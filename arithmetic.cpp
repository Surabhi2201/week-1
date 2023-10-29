#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b,d=a-b, e=a*b, f=a/b;
	printf("The sum of a and b is %d\n",c);
	printf("The difference of a and b is %d \n",d );
	printf("The multiplication of a and b is %d \n",e);
	printf("The division of a and b is %d\n",f);
	
	return(0);
	
	
}
