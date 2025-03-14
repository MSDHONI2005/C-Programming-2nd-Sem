#include<stdio.h>
// Swap of two numbers using third variable
int main()
{
	int a,b,c;
	printf ("Enter the first number :");
	scanf ("%d",&a);
	printf ("Enter the second number :");
	scanf ("%d",&b);
	c=a;
	a=b;
	b=c;
	printf ("The first number is :%d\n",a);
	printf ("The second number is :%d",b);
	return 0;
}
