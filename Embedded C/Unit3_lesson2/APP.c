/****************************************************/

#include "UART.h"


unsigned char String_Buffer[100] = "Learn-in-depth: Yasmeen";
void main(void)
{
	
	UART_voidSendString(String_Buffer);
	
}
