/***********************************************************************************************************/
/** File name   : Arrays_Ex5.c                                                                  ************/
/** Description : Write a program in C to search an element in array                            ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/

#include <stdio.h>
#define ARRAY_SIZE 20

int main(void)
{
	int s32Num_Of_Elements;
	int as32Nums[ARRAY_SIZE];
	int s32Counter;
	int s32Element;
	
	printf("Enter no of elements : ");
	scanf("%d" , &s32Num_Of_Elements);
	
	for(s32Counter = 0 ; s32Counter < s32Num_Of_Elements; s32Counter++)
	{
		printf("Enter Element%d : ",(s32Counter + 1) );
		scanf("%d" , &as32Nums[s32Counter]);
	}
	
	printf("Enter the element to be searched : ");
	scanf("%d" , &s32Element);
	
	for(s32Counter = 0; s32Counter < s32Num_Of_Elements; s32Counter++)
	{
		if(as32Nums[s32Counter] == s32Element)
		{
			printf("Number found at the location = %d" , (s32Counter + 1) );
			break;
		}	
	}
	if(s32Counter == s32Num_Of_Elements )
	{
		printf("Nubmer is not found");
	}
	return 0;
}
