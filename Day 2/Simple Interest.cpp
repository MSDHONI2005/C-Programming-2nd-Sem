#include<stdio.h>
// Simple interest
int main()
{
float p,r,t,si;
printf ("Enter the principal amount :");
scanf ("%f",&p);
printf ("Enter the rate of interest :");
scanf ("%f",&r);
printf ("Enter the time of period :");
scanf ("%f",&t);
si=(p*r*t)/100;
printf ("Simple interest is : %f",si);
return 0;
}
