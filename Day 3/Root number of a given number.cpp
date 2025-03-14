#include<stdio.h>
//Root number of a given number
#include<math.h>
int main()
{
	float a,b;
	printf ("Enter the number :");
	scanf ("%f",&a);
	b=sqrt(a);
	printf("The square root of the above number is :%.2f\n",b);
	return 0;
}
