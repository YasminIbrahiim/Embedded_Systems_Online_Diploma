/*********************************************************************/
/********************  EX4  ******************************************/
/*********************************************************************/

#include <stdio.h>

int Power_Calc_Recursion(int s32BaseCpy, int  s32Power);
int main()
{
	int s32base;
	int s32power;
	int s32result;
	printf("Enter base number: ");
	scanf("%d" , &s32base );
	printf("Enter power number(positive integer): ");
	scanf("%d" , &s32power);
	s32result  = Power_Calc_Recursion(s32base , s32power );
	printf("%d^%d = %d ",s32base ,s32power,s32result );
	
}

int Power_Calc_Recursion(int s32BaseCpy, int  s32Power)
{
	static int s32result_LOC;
	if(s32Power == 0)
	return 1;
	s32result_LOC = s32BaseCpy * Power_Calc_Recursion(s32BaseCpy , --s32Power ); 
	return s32result_LOC;
}