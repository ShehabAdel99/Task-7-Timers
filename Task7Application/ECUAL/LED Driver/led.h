/*
 * led.h
 *
 * Created: 10/3/2022 7:00:44 AM
 *  Author: YAS
 */ 


#ifndef LED_H_
#define LED_H_


#include "../../MCAL/DIO Driver/dio.h"
//LED MACROS
#define RED_LED_PORT    PORT_D
#define RED_LED_PIN     PIN0
#define GREEN_LED_PORT    PORT_D
#define GREEN_LED_PIN     PIN1
#define BLUE_LED_PORT    PORT_D
#define BLUE_LED_PIN     PIN2
//LED FUCNTIONS
void  LED_init(uint8_t ledPort, uint8_t ledPin);
void  LED_on(uint8_t ledPort, uint8_t ledPin);
void  LED_off(uint8_t ledPort, uint8_t ledPin);
void  LED_toggle(uint8_t ledPort, uint8_t ledPin);








#endif /* LED_H_ */