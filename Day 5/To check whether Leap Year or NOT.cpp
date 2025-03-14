#include<stdio.h>
//To check whether Leap Year or NOT
int main()
{
	int a;
	printf ("Enter any year :");
	scanf ("%d",&a);
	if(a%400==0)
	{
		printf ("The Year is a Leap Year.",a);
	}
	else if(a%100==0)
	{
		printf ("The Year in NOT a Leap Year.",a);
	}
	else if(a%4==0)
	{
		printf ("The Year is a Leap Year.",a);
	}
	else
	{
		printf ("The Year is NOT a Leap Year.",a);
	}
	return 0;
}
