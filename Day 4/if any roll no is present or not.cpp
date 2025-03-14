#include<stdio.h>
//if any roll no is present or not
int main()
{
	printf ("Whether Roll No 100 is present or not :\n");
	float x;
	printf ("Enter the Roll No :");
	scanf ("%f",&x);
	if (x==100)
	{
		printf ("The Entered Roll Number is present.\n");
	}
	return 0;
}
