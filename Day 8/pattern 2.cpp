#include<stdio.h>
int main()
{
	int n=4,num=1;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",num++);
		}
		printf("\n");
	}
	return 0;
}
