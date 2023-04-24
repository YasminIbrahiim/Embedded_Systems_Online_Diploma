/*********************************************************************/
/********************  EX2  ******************************************/
/*********************************************************************/

#include <stdio.h>


int Factorial_Recursion(int u32numCpy);
int main(void)
{
	int u32num ; 
	int u32Factorial ; 
	printf("Enter an positive integer: ");
	scanf("%d", &u32num );
	u32Factorial = Factorial_Recursion(u32num);
	printf("Factorial of %d = %d",u32num ,u32Factorial );
	
}

int Factorial_Recursion(int u32numCpy)
{
	static int u32Factorial_LOC = 1;
	if(u32numCpy == 0)
	return u32Factorial_LOC;
	u32Factorial_LOC *= u32numCpy;
	Factorial_Recursion(--u32numCpy);
	
}