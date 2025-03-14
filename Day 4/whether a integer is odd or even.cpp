#include<stdio.h>
//whether a integer is odd or even
int main()
{
	int a;
	printf ("Enter any number :");
	scanf ("%d",&a);
	if (a%2==0)
	{
		printf ("The above number is Even.");
	}
	else
	{
		printf ("The above number is Odd.");
	}
	return 0;
}
