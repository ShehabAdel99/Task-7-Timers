/*
 * app.c
 *
 * Created: 11/2/2022 7:13:27 AM
 *  Author: sheha
 */ 
#include "app.h"
void APP_init(void)
{
    overflowcounter = 0;
	LED_init(RED_LED_PORT,RED_LED_PIN);
	//Choose timer mode 
	TCCR0 = 0x00; // Normal mode
	
	
}
void APP_start(void)
{
	LED_on(RED_LED_PORT,RED_LED_PIN);
	delay_500();
	LED_off(RED_LED_PORT,RED_LED_PIN);
	delay_300();
}