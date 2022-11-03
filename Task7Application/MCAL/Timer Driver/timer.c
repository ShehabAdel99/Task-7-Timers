/*
 * timer.c
 *
 * Created: 11/1/2022 12:30:49 PM
 *  Author: sheha
 */ 
#include "timer.h"

void delay_500(void)
{
    
    
	//Timer start with prescaler
	TCCR0 |= (1<<CS02) ; // 256 prescaler
	while (overflowcounter < NUMBER_OF_OVERFLOWS500)
	{
		//Set Timer initial Value
		 TCNT0=0x0C;
	 //wait untiL One overflow flag set
	 while((TIFR & (1<<0)) == 0);
	 // Clear overflow flag
	 TIFR |= (1<<0);
     
	 overflowcounter++;	
	
	}
	overflowcounter = 0;
	//Timer stop
	TCCR0 = 0x00;
}
void delay_300(void)
{
	
	//Timer start with prescaler
	TCCR0 = (1<<CS02) | (1<<CS00); // 1024 prescaler
	while (overflowcounter < NUMBER_OF_OVERFLOWS300)
	{
		//Set Timer initial Value
		TCNT0=0x6E;
		//wait untiL One overflow flag set
		while((TIFR & (1<<0)) == 0);
		// Clear overflow flag
		TIFR |= (1<<0);
		overflowcounter++;
		
	}
	overflowcounter = 0;
	//Timer stop
	TCCR0 = 0x00;

}