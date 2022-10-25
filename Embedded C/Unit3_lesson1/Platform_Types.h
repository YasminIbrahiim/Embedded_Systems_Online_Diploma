/********************************************************************************/
/** File Name   : Platform_Types.h                                  *************/
/** Description : Type definitions lib for ATMEGA32                 *************/
/** Author      : Yasmeen Ibrahim                                   *************/
/** Date        : 10/10/2022                                        *************/
/********************************************************************************/ 

#ifndef   _PLATFORM_TYPES_H
#define   _PLATFORM_TYPES_H
 
typedef     unsigned                char   uint8    ;
typedef     signed                  char   sint8    ;
	
typedef     unsigned short          int    uint16   ;
typedef     signed   short          int    sint16   ;
	
typedef     unsigned long           int    uint32   ;
typedef     signed   long           int    sint32   ;

typedef     unsigned long    long   int    uint64   ;
typedef     signed   long    long   int    sint64   ;

typedef                             float  float32  ;
typedef                             double float64  ;
typedef              long           double float128 ;


typedef     volatile  unsigned                char   vuint8    ;
typedef     volatile  signed                  char   vsint8    ;

typedef     volatile  unsigned short          int    vuint16   ;
typedef     volatile  signed   short          int    vsint16   ;

typedef     volatile  unsigned long           int    vuint32   ;
typedef     volatile  signed   long           int    vsint32   ;

typedef     volatile  unsigned long    long   int    vuint64   ;
typedef     volatile  signed   long    long   int    vsint64   ;

typedef     volatile                          float  vfloat32  ;
typedef     volatile                          double vfloat64  ;
typedef     volatile           long           double vfloat128 ;

typedef     unsigned  char   BOOLEAN;

#define   TRUE     ((BOOLEAN) 0x01)
#define   FALSE    ((BOOLEAN) 0x00)

//BIT Manipulation
#define  SET_BIT(REG , BIT_NUM)    (REG) |=   ((uint32)1<<(BIT_NUM))                
#define  CLR_BIT(REG , BIT_NUM)    (REG) &=  ~((uint32)1<<(BIT_NUM))
#define  TGL_BIT(REG , BIT_NUM)    (REG) ^=   ((uint32)1<<(BIT_NUM))
#define  GET_BIT(REG , BIT_NUM)    (((REG) >> (BIT_NUM))&(uint32)1)

#endif