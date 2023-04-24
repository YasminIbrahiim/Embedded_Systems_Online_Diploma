/***********************************************************************************************************/
/** File name   : Strings_Ex3.c                                                                 ************/
/** Description : C program to reverse string without using library function                    ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/

#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 20
int main(void)
{
	char as8String[ARRAY_SIZE];
	char as8Reversed_String[ARRAY_SIZE];
	char s8String_length;
	char s8Counter = 0;
	printf("Enter the string: ");
	scanf("%s" , &as8String);
	s8String_length = strlen(as8String);
	while(s8Counter < s8String_length )
	{
		as8Reversed_String[s8Counter] = as8String[s8String_length - s8Counter - 1];
		s8Counter++; 
	}
	as8Reversed_String[s8Counter] = '\0';
	printf("Reverse String is: %s" ,as8Reversed_String );
	
	
	return 0;
}