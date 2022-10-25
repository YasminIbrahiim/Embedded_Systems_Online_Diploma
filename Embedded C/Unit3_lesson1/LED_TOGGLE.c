/********************************************************************************/
/** File Name   : LED_Toggle.c                                      *************/
/** Description : Type definitions lib for ATMEGA32                 *************/
/** Author      : Yasmeen Ibrahim                                   *************/
/** Date        : 10/10/2022                                        *************/
/********************************************************************************/

#include <stdint.h>
//#include "Platform_Types.h"
#include "LED_TOGGLE.h"

//BIT Manipulation
#define  SET_BIT(REG , BIT_NUM)    (REG) |=   ((uint64_t)1<<(BIT_NUM))                
#define  CLR_BIT(REG , BIT_NUM)    (REG) &=  ~((uint64_t)1<<(BIT_NUM))
#define  TGL_BIT(REG , BIT_NUM)    (REG) ^=   ((uint64_t)1<<(BIT_NUM))
#define  GET_BIT(REG , BIT_NUM)    (((REG) >> (BIT_NUM))&(uint64_t)1)

int main(void)
{
SET_BIT(RCC_APB2ENR , 2 );
CLR_BIT(GPIOA_CRH   , 36);
SET_BIT(GPIOA_CRH   , 37);
CLR_BIT(GPIOA_CRH   , 38);
CLR_BIT(GPIOA_CRH   , 39);

while(1)
{
	uint16_t u16CntrLOC ;
	SET_BIT(GPIOA_ODR , 13);
	for(u16CntrLOC = 0 ; u16CntrLOC < 5000 ; u16CntrLOC++ );
	CLR_BIT(GPIOA_ODR , 13);
	for(u16CntrLOC = 0 ; u16CntrLOC < 5000 ; u16CntrLOC++ );
	
}	
	
}
