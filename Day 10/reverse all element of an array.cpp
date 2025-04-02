#include<stdio.h>
int main()
{
    int n,i,rev,num;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Reversed elements: ");
    for(i=0;i<n;i++) 
	{
        num=arr[i]; rev=0;
        while(num>0) 
		{
            rev=rev*10+num%10;
            num=num/10;
        }
        printf("%d ",rev);
    }
    printf("\n");
    return 0;
}
