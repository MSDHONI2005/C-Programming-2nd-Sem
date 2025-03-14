#include<stdio.h>
//checking if the number is a whole number
int main()
{
float num;
printf ("Enter a number :");
scanf ("%f",&num);
if(num>=0&&(int)num==num)
{
	printf ("The number %.2f is a Whole Number.\n",num);
}
else
{
	printf ("The number %.2f is NOT a Whole Number.\n",num);
}
 return 0;
}
