#include <stdio.h>
//To check maximum among three numbers using ladder if else
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
	if (a>b&&a>c) 
	{
        printf("Maximum number among these three is: %d\n",a);
    } 
	else if (b>a&&b>c) 
	{
        printf("Maximum number among these three is: %d\n",b);
    } 
	else 
	{
        printf("Maximum number among these three is: %d\n",c);
    }
    return 0;
}
