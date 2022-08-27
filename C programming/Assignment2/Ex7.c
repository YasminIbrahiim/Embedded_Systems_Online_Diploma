#include <stdio.h>


/******************** Ex7 *******************/
void main(void)
{
	int num , i , factorial = 1;
	printf("Enter an integer: ");
	scanf("%d",&num);
	if(num < 0)
	{
		printf("Error!! Factorial of negative number does't exist\n");
	}
	else
	{
		for( i = 1 ; i <= num ; i++)
		{
			factorial = factorial * i ;
		}
	printf("Factorial= %d \n", factorial);\
	}
	printf("---------------------------------\n");
}