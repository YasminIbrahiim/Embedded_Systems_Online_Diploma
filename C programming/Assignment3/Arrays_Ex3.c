/***********************************************************************************************************/
/** File name   : Arrays_Ex3.c                                                                  ************/
/** Description : Write a program in C to ask the user to enter a matrix (size of matrix is     ************/
/**               specified by user) and this program finds the transpose of that matrix and    ************/
/**               displays it                                                                   ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/
#include <stdio.h>
#define NUM_OF_ROWS      10
#define NUM_OF_COLUMNS   10

int main(void)
{
	int as32Matrix[NUM_OF_ROWS][NUM_OF_COLUMNS] , as32Matrix_Transpose[NUM_OF_ROWS][NUM_OF_COLUMNS];
	int s32Num_Of_Rows , s32Num_Of_Columns , s32Counter_Rows , s32Counter_Columns;
	
	printf("Enter the number of rows and columns of the matrix:");
	scanf("%d" , &s32Num_Of_Rows);
	scanf("%d" , &s32Num_Of_Columns );
	printf("Enter elements of matrix:\n");	
	for(s32Counter_Rows = 0; s32Counter_Rows < s32Num_Of_Rows ; s32Counter_Rows++)
	{
		for(s32Counter_Columns = 0; s32Counter_Columns < s32Num_Of_Columns ; s32Counter_Columns++)
		{
			printf("Enter element a%d%d: ", (s32Counter_Rows + 1),(s32Counter_Columns + 1));
			scanf("%d", &as32Matrix[s32Counter_Rows][s32Counter_Columns]);
		}
	}
	printf("Entered matrix:\n");
	for(s32Counter_Rows = 0; s32Counter_Rows < s32Num_Of_Rows ; s32Counter_Rows++)
	{
		for(s32Counter_Columns = 0; s32Counter_Columns < s32Num_Of_Columns ; s32Counter_Columns++)
		{
			printf("%d   ", as32Matrix[s32Counter_Rows][s32Counter_Columns]);
		}
		printf("\n");
	}
	printf("Transpose of matrix:\n");
	for(s32Counter_Columns = 0; s32Counter_Columns < s32Num_Of_Columns ; s32Counter_Columns++)
	{
		for(s32Counter_Rows = 0; s32Counter_Rows < s32Num_Of_Rows ; s32Counter_Rows++)
		{
			as32Matrix_Transpose[s32Counter_Columns][s32Counter_Rows] = as32Matrix[s32Counter_Rows][s32Counter_Columns];
			printf("%d   ", as32Matrix_Transpose[s32Counter_Columns][s32Counter_Rows]);
		}
		printf("\n");
	}
	return 0;
}

