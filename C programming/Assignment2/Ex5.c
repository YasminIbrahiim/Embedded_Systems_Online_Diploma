#include <stdio.h>


/******************** Ex5 *******************/
void main(void)
{
	char alphabet;
	printf("Enter a character: ");
	scanf("%c",&alphabet);
	if(((alphabet >= 'a')&&(alphabet <= 'z'))||((alphabet >= 'A')&&(alphabet <= 'Z')))
	{
		printf("%c is an alphabet\n",alphabet);
	}else
	{
		printf("%c is not an alphabet\n",alphabet);
	}
	printf("---------------------------------\n");
}