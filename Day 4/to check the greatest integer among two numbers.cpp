#include<stdio.h>
//to check the greatest integer among two numbers
int main()
{
	int a,b;
	printf ("Enter the first number :");
	scanf ("%d",&a);
	printf ("Enter the Second number :");
	scanf ("%d",&b);
	if(a>b)
	{
		printf ("The number %d is greater than the number %d\n",a,b);
	}
	else
	{
		printf ("The number %d is greater than the number %d\n",b,a);
	}
	return 0;
}
