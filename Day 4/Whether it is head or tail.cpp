#include<stdio.h>
//Whether it is head or tail
int main()
{
	char ch;
	printf ("Enter a upper case character:");
	scanf ("%c",&ch);
	if(ch=='H')
	{
		printf ("The Coin is Head");
	}
	else
	{
		printf ("The Coin is Tail");
	}
	return 0;
}
