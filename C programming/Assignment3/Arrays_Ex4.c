/***********************************************************************************************************/
/** File name   : Arrays_Ex4.c                                                                  ************/
/** Description : Write a program in C to insert an element in an array                         ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/

#include <stdio.h>
#define ARRAY_SIZE 20

int main(void)
{
	int s32Num_Of_Elements;
	int as32Nums[ARRAY_SIZE];
	int s32Index;
	int s32Element;
	int s32Counter;
	
	printf("Enter no of elements : ");
	scanf("%d" , &s32Num_Of_Elements);
	
	for(s32Counter = 0 ; s32Counter < s32Num_Of_Elements; s32Counter++)
	{
		printf("Enter Element%d : ",(s32Counter + 1) );
		scanf("%d" , &as32Nums[s32Counter]);
	}
	
	printf("Enter the element to be inserted : ");
	scanf("%d" , &s32Element);
	
	printf("Enter the location : ");
	scanf("%d" , &s32Index);
	as32Nums[s32Index - 1] = s32Element;
	
	for(s32Counter = 0 ; s32Counter < s32Num_Of_Elements; s32Counter++)
	{
		printf("%d " , as32Nums[s32Counter] );
	}
	return 0;
}
