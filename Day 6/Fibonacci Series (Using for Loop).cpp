#include <stdio.h>
int main()
{
    int n,a=0,b=1,c=0,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for (i=1;i<=n;i++) 
	{
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
   return 0;
}

