/***********************************************************************************************************/
/** File name   : Arrays_Ex1.c                                                                  ************/
/** Description : Write a program to find sum of two matrix of order 2*2 using                  ************/
/**               multidimensional arrays where elements of matrix are entered by user          ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/


#include <stdio.h>

int main(void)
{
	float f32mat1[2][2];
	float f32mat2[2][2];
	float f32sum[2][2];
	
	printf("Enter the elements of 1st matrix: \n");
	printf("Enter a11: ");
	scanf("%f" , &f32mat1[0][0]);
	printf("Enter a12: ");
	scanf("%f" , &f32mat1[0][1]);
	printf("Enter a21: ");
	scanf("%f" , &f32mat1[1][0]);
	printf("Enter a22: ");
	scanf("%f" , &f32mat1[1][1]);
	
	printf("Enter the elements of 2nd matrix: \n");
	printf("Enter b11: ");
	scanf("%f" , &f32mat2[0][0]);
	printf("Enter b12: ");
	scanf("%f" , &f32mat2[0][1]);
	printf("Enter b21: ");
	scanf("%f" , &f32mat2[1][0]);
	printf("Enter b22: ");
	scanf("%f" , &f32mat2[1][1]);

	f32sum[0][0] = f32mat1[0][0] + f32mat2[0][0];
	f32sum[0][1] = f32mat1[0][1] + f32mat2[0][1];
	f32sum[1][0] = f32mat1[1][0] + f32mat2[1][0];
	f32sum[1][1] = f32mat1[1][1] + f32mat2[1][1];
	printf("sum of matrix:\n");
	printf("%f    %f\n" , f32sum[0][0] , f32sum[0][1]);
	printf("%f    %f" , f32sum[1][0] , f32sum[1][1]);
	return 0;
}
