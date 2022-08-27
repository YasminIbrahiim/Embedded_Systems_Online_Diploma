#include <stdio.h>

/************ Ex4 **************/
void main(void)
{
	float num;
	printf("Enter a number: ");
	scanf("%f",&num);
	if(num > 0)
	{
		printf("%f is positive",num);
	}else if(num < 0)
	{
		printf("%f is negative",num);
	}else
	{
		printf("You entered zero",num);
	}
}
