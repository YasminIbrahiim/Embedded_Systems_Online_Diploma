#include "UART.h"

#define UARTODR  *((volatile unsigned int*)0x101f1000)

void UART_voidSendString(unsigned char* pTxStringCpy )
{
	
	while(*pTxStringCpy != '\0')
	{
		UARTODR = (unsigned int)(*pTxStringCpy);
		pTxStringCpy++;
	}
}