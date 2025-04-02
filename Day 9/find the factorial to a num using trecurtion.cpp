#include<stdio.h>
int factorial(int);
int main()
{
	int a;
	printf("enter a=");
	scanf("%d",&a);
	printf("%d",factorial(a));
	return 0;
}
int factorial(int n)
{
	if (n!=0)
	{
		return factorial(n-1)*n;
	}
	else
	{
		return 1;
	}
}
