#include <stdio.h>

/**************** Ex6 **************/
void main(void)
{
	float a, b , temp;
	printf("Enter value of a: ");
	scanf("%f",&a);
	printf("Enter value of b: ");
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);
	printf("------------------------------\n");
}
