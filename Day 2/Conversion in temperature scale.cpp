#include<stdio.h>
// Conversion in temperature scale
int main()
{
	float C1,C2,F1,F2;
	printf ("Enter the temperature in celsius :");
	scanf ("%f",&C1);
	F1=(C1*9/5)+32;
	printf ("Enter the temperature in fahrenheit scale : %f\n",F1);
	printf ("Enter the temperature in fahrenheit :");
	scanf ("%f",&F2);
	C2=(F2-32)*5/9;
	printf ("Enter the temperature in celsius scale : %f\n",C2);
	return 0;
}
