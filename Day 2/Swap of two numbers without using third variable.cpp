#include<stdio.h>
//Swap of two numbers without using third variable
int main()
{
	int a,b;
	printf ("Enter the first number :");
	scanf ("%d",&a);
	printf ("Enter the second number :");
	scanf ("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf ("The first number is :%d\n",a);
	printf ("The second number is :%d",b);
	return 0;
}
