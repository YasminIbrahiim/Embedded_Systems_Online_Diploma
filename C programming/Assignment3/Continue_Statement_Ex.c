/*********************************************************************************************************************/
/** File name   : Continue_Statement.c                                                                    ************/
/** Description : C program to find the product of 4 integers entered by a user. if user enters 0 skip it ************/   
/** Author      : Yasmeen Ibrahim                                                                         ************/        
/*********************************************************************************************************************/
#include <stdio.h>

#define NUM_OF_INTEGERS  4
int main(void)
{
	int s32Num;
	int s32Counter;
	int s32Product = 1;
	
	for(s32Counter = 1; s32Counter <= NUM_OF_INTEGERS ; s32Counter++)
	{
		printf("Enter num %d: ", s32Counter);
		scanf("%d" , &s32Num);
		if(s32Num == 0)
		{
			continue;
		}
		s32Product *= s32Num;
	}
	printf("Product = %d", s32Product);
	return 0;
}