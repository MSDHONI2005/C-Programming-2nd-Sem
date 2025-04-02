#include<stdio.h>
int fibonacci(int a,int b,int n);
int main()
{
int a;
printf("Enter the number of terms :");
scanf("%d",&a);
printf ("Fibonacii Series : ");
fibonacci(0,1,a);
printf("\n");
return 0;
}
int fibonacci(int a,int b,int n)
{
if (n!=0)
{
printf("%d\t",a);
return fibonacci (b,a+b,n-1);
}
else
return 1;
}
