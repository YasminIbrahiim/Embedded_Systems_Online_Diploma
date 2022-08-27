#include <stdio.h>

/************ Ex1 **************/
void main(void)
{
	int num;
	printf("Enter an integer you want to check: ");
	scanf("%d",&num);
	if((num %2) == 0)
	{
		printf("%d is even\n",num);
	}else
	{
		printf("%d is odd\n",num);
	}
	printf("-----------------------------------\n");
	
}
