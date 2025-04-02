#include<stdio.h>
int sum(int);
int main()
{
	int a;
	printf("enter a=");
	scanf("%d",&a);
	printf("%d",sum(a));
	return 0;
}
	int sum(int n)
{
		if(n!=0)
		{
			return n+sum(n-1);
		}
	else
	   {
		  return 0;
	   }
}

