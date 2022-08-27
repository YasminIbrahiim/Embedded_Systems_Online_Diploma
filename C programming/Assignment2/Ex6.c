#include <stdio.h>


/******************** Ex6 *******************/
void main(void)
{
	int n , i , sum = 0;
	printf("Enter an integer: ");
	scanf("%d",&n);
	for( i = 1 ; i <= n ; i++)
	{
		sum = sum + i ;
	}
	printf("sum of natural numbers 1-%d: %d\n",n , sum);
	printf("---------------------------------\n");
}