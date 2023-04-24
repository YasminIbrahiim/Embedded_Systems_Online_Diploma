/*************************************************************************************************************************/
/** File name   : Ex1.c                                                                                       ************/
/** Description : Write a program in C to find prime numbers between two intervals                            ************/   
/** Author      : Yasmeen Ibrahim                                                                             ************/        
/*************************************************************************************************************************/

#include <stdio.h>
void Prime_nums(unsigned int s32num1Cpy ,unsigned int u32num2Cpy);
int main(void)
{
	unsigned int u32num1 , u32num2 ; 
	
	printf("Enter two numbers(intervals): ");
	scanf("%d" , &u32num1 );
	scanf("%d" , &u32num2 );
	Prime_nums(u32num1 , u32num2);	
}
void Prime_nums(unsigned int u32num1Cpy ,unsigned int u32num2Cpy)
{
	unsigned int u32Counter_LOC ;
	printf("Prime numbers between %d and %d are: " , u32num1Cpy , u32num2Cpy );
	for(u32Counter_LOC = u32num1Cpy ;u32Counter_LOC <= u32num2Cpy ; u32Counter_LOC++)
	{
		unsigned int u32Counter1_LOC;
		for(u32Counter1_LOC = 2; u32Counter1_LOC < 10 ; u32Counter1_LOC++)
		{
			if((u32Counter_LOC % u32Counter1_LOC) == 0 )
			{
				break;
			}else
			{
				continue;
			}
		}
		if(u32Counter1_LOC == 10)
		{
			printf("%d  " , u32Counter_LOC);
		}
	}	
}


