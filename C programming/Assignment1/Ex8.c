#include <stdio.h>

/************ Ex8 ************/
void main(void)
{
	int num1, num2 , num;
	printf("Input first number: ");
	scanf("%d",&num1);
	printf("Input second number: ");
	scanf("%d",&num2);
	num = num1 ^ num2; 
	num2 = num1 ^ num; 
	num1 = num2 ^ num;
	printf("first number after swapping: %d\n",num2);
	printf("second number after swapping: %d",num1);
}