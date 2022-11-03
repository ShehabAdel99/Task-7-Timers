/*
 * timer.h
 *
 * Created: 10/4/2022 12:24:26 PM
 *  Author: YAS
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../DIO Driver/dio.h"

unsigned int overflowcounter;
#define NUMBER_OF_OVERFLOWS500 8
#define NUMBER_OF_OVERFLOWS300 2

// using the avr at 1M HZ
#define F_CPU 1000000U
/************************************************************************/
/*                         TIMER0 REGISTERS                                                       */
/************************************************************************/
#define TCCR0 *(( volatile uint8_t*)0x53)
#define TCNT0 *(( volatile uint8_t*)0x52)
#define TIFR *(( volatile uint8_t*)0x58)
/* TIMER0 Bits macros */
// TCCR0
#define CS00 0
#define CS01 1
#define CS02 2
#define WGM01 3
#define COM00 4
#define COM01 5
#define WGM00 6
#define FOC0 7
//Delay functions 
void delay_500(void);
void delay_300(void);

#endif /* TIMER_H_ */