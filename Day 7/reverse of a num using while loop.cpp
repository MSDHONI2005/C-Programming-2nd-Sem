#include<stdio.h>
int main()
{
int n, reverse=0, digit;
printf("enter n=");
scanf("%d",&n);
while(n>0)
{
digit=n%10;
reverse=reverse*10+digit;
n=n/10;
}
printf("%d", reverse);
return 0;
}
