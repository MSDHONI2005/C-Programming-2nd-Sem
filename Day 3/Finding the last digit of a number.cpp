#include<stdio.h>
//Finding the last digit of a number
#include<math.h>
int main()
{
	int number,Lastdigit;
	printf ("Enter a number :");
	scanf ("%d",&number);
	Lastdigit=number-(number/10)*10;
	printf ("The last digit of the number is :%d\n",Lastdigit);
	return 0;
}
