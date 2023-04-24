/***********************************************************************************************************/
/** File name   : Strings_Ex1.c                                                                 ************/
/** Description : C program to find the frequency of characters in a string                     ************/   
/** Author      : Yasmeen Ibrahim                                                               ************/        
/***********************************************************************************************************/


#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE  50
int main(void)
{
	char  as8String[ARRAY_SIZE];
	char  s8Character;
	char  s8Counter = 0 ;
	char  s8Frequency  = 0; 
	printf("Enter a string: ");
	gets(as8String);
	printf("Enter a character to find frequency: ");
	scanf("%c" ,&s8Character);
	
	while(as8String[s8Counter] != '.')
	{
		if(as8String[s8Counter] == s8Character )
		{
		
			s8Frequency++;
		}
		s8Counter++;
	}
	printf("Frrequency of %c : %d", s8Character , s8Frequency );
	return 0;
}