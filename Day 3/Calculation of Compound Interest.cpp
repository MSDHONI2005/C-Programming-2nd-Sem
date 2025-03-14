#include<stdio.h>
//Calculation of Compound Interest
#include<math.h>
int main()
{
	float p,r,t,ci,a;
	printf ("Enter the principle amount :");
	scanf ("%f",&p);
	printf ("Enter the rate of interest :");
	scanf ("%f",&r);
	printf ("Enter the time period :");
	scanf ("%f",&t);
	a=p*pow((1+r/100),t);
	ci=a-p;
	printf ("The Compound Interest is :%.2f\n",ci);
	printf ("The Total amount (Principal+Interest)is :%.2f\n",a);
	return 0;
}
