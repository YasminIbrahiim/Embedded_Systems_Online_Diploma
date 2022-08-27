#include <stdio.h>


/******************** Ex8 *******************/
void main(void)
{
	char operator;
	int op;
	float num1, num2 , result;
	printf("Enter operator either + or - or * or / : ");
	scanf("%c",&operator);
	printf("Enter two operands: ");
	scanf("%f%f",&num1,&num2);
	
	switch((int)operator)
	{
		case 43 :	result = num1 + num2;
				    printf("%f + %f = %f", num1 , num2 , result); break;
					
		case 45 :   result = num1 - num2;
					printf("%f - %f = %f", num1 , num2 , result); break;
					
		case 42 :   result = num1 * num2;
					printf("%f * %f = %f", num1 , num2 , result); break;
					
		case 47 :   result = num1 / num2;
					printf("%f / %f = %f", num1 , num2 , result); break;
	}
}