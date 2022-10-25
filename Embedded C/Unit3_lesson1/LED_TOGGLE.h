/********************************************************************************/
/** File Name   : Platform_Types.h                                  *************/
/** Description : Type definitions lib for ATMEGA32                 *************/
/** Author      : Yasmeen Ibrahim                                   *************/
/** Date        : 10/10/2022                                        *************/
/********************************************************************************/

#ifndef  _LED_TOGGLE_H 
#define  _LED_TOGGLE_H

#define  RCC_BASE_ADDRESS      (0x40021000) 
#define  GPIOA_BASE_ADDRESS    (0x40010800)  
#define  RCC_APB2ENR          *((volatile uint32_t*)RCC_BASE_ADDRESS   + 0x18) 
#define  GPIOA_CRH            *((volatile uint32_t*)GPIOA_BASE_ADDRESS + 0x04)  
#define  GPIOA_ODR            *((volatile uint32_t*)GPIOA_BASE_ADDRESS + 0x0C)  
	
#endif
