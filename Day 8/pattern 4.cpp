#include<stdio.h>
int main()
{
	int n=4;
	int i,j;
	for (i=1;i<=n;i++)
	{
		for (j=n;j>=1;j--)
		{
		if (i>=j)
		printf("* ");
		else
		printf(" ");
		}
	printf("\n");
	}
	return 0;
}
