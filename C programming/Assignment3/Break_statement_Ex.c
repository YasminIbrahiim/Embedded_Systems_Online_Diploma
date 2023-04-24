/*************************************************************************************************************************/
/** File name   : Break_Statement_Ex.c                                                                        ************/
/** Description : C program to find average of n positive numbers entered by user.                            ************/
/**               But,if the input is negative, display the average(excluding the average of negative input)  ************/   
/** Author      : Yasmeen Ibrahim                                                                             ************/        
/*************************************************************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
	float f32Num;
	int   s32Num_Of_Elements;
	float f32Sum = 0 ;
	float f32Average ;
	int   s32Counter ;
	
	printf("no of inputs: ");
	scanf("%d" ,&s32Num_Of_Elements);
	for(s32Counter = 1 ; s32Counter <= s32Num_Of_Elements; s32Counter++)
	{
		printf("Enter n%d : " , s32Counter);
		scanf("%f" , &f32Num);
		if(f32Num < 0.0)
		{
			break;
		}
		f32Sum += f32Num;
	}
	f32Average = f32Sum / (s32Counter - 1);
	printf("Average = %f" , f32Average);
	return 0;
}

