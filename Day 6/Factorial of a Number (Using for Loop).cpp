#include <stdio.h>
int main()
{
    int num,i,factorial;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num<0)
        printf("Factorial of a negative number is not defined.\n");
    else 
	{
        for (i=1;i<=num;i++)
		{
            factorial=factorial*i;
        }
        printf("Factorial of %d is = %d\n",num,factorial);
    }
    return 0;
}
