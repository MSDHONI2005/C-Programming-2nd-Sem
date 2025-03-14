#include<stdio.h>
//find out floorValue and ceilingValue of a number
#include<math.h>
int main()
{
	float num;
	int floorValue,ceilingValue;
	printf ("Enter a number :");
	scanf ("%f",&num);
	floorValue=floor(num);
	ceilingValue=ceil(num);
	printf ("The floor Value is :%d\n",floorValue);
	printf ("The ceiling Value is :%d",ceilingValue);
	return 0;
}
