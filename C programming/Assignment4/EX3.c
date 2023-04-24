/*************************************************************************************************************************/
/** File name   : Ex3.c                                                                                       ************/
/** Description : Write a program in C to reverse a sentence using recursion                                  ************/   
/** Author      : Yasmeen Ibrahim                                                                             ************/        
/*************************************************************************************************************************/

#include <stdio.h>

int Reverse_Sentence_Recursion(char* s8SentenceCpy , char s8Array_SizeCpy);

#define ARRAY_SIZE  15
int main(void)
{
char s8Sentence[ARRAY_SIZE] ;

printf("Enter a sentence: ");
gets(s8Sentence);
Reverse_Sentence_Recursion(s8Sentence ,ARRAY_SIZE);
printf("%s" , s8Sentence);

}

int Reverse_Sentence_Recursion(char* s8SentenceCpy , char s8Array_SizeCpy)
{
	char s8Temp_LOC;
	static char s8Counter_LOC = 0;
	if((s8Counter_LOC >= s8Array_SizeCpy) )
	return 0;
	s8Temp_LOC = s8SentenceCpy[s8Counter_LOC];
	s8SentenceCpy[s8Counter_LOC] = s8SentenceCpy[s8Array_SizeCpy - 1 ];
	s8SentenceCpy[s8Array_SizeCpy - 1 ] = s8Temp_LOC;
	s8Counter_LOC++;
	Reverse_Sentence_Recursion( s8SentenceCpy , --s8Array_SizeCpy);
	
}