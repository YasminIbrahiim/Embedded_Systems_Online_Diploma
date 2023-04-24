/***********************************************************************************************************/
/** File name   : Strings_Ex2.c                                                                 ************/
/** Description : C program to find the length of a string                                      ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/

#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 20
int main(void)
{
	char as8String[ARRAY_SIZE];
	char s8Counter = 0 ;
	printf("Enter a string: ");
	scanf("%s" , as8String);
	while(as8String[s8Counter] != '\0')
	{
		s8Counter++;
	}
	printf("Length of string: %d", s8Counter);
	return 0;
}