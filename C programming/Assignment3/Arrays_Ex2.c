/***********************************************************************************************************/
/** File name   : Arrays_Ex2.c                                                                  ************/
/** Description : Write a program in C takes number of element from user                        ************/
/**              (where, n is specified by user), stores data in an array and calculates        ************/
/**               the average of those numbers                                                  ************/          
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/

#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 50
int main(void)
{
	int   s32Num_Of_Elements;
	float af32_Nums[ARRAY_SIZE];
	int   s32Counter;
	float f32Sum = 0 ; 
	float f32Average;
	
	printf("Enter the numbers of data: ");
	scanf("%d" , &s32Num_Of_Elements);
	for(s32Counter = 0 ; s32Counter < s32Num_Of_Elements ; s32Counter++)
	{
		printf("%d. Enter number: ", s32Counter + 1);
		scanf("%f", &af32_Nums[s32Counter]);
		f32Sum +=  af32_Nums[s32Counter] ; 
	}
	f32Average = f32Sum / s32Num_Of_Elements;
	printf("Average = %f ",f32Average );
	


return 0;
}
