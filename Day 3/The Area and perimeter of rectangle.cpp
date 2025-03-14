#include<stdio.h>
//The Area and perimeter of rectangle
#include<math.h>
int main()
{
	float l,b,a,p;
	printf ("Enter the length :");
	scanf ("%f",&l);
	printf ("Enter the width :");
	scanf ("%f",&b);
	a=l*b;
	p=2*(l+b);
	printf ("The area of the reactangle is :%.2f\n",a);
	printf ("The perimeter of the reactangle is :%.2f\n",p);
	return 0;
}
 
