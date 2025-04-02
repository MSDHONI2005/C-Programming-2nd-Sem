#include<stdio.h>
int sum(int);
int main() 
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Sum of squares of first %d natural numbers is: %d\n",a,sum(a));
    return 0;
}
int sum(int n)
{
    if (n!=0)
    return n*n+sum(n-1);
    else
    return n;
}
