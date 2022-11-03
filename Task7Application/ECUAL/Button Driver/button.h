/*
 * button.h
 *
 * Created: 10/3/2022 7:00:12 AM
 *  Author: YAS
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO Driver/dio.h"
//BUTTON MACROS
#define BUTTON_1_PORT    PORT_A
#define BUTTON_1_PIN     PIN0
#define LOW 0
#define HIGH 1
//button functions 
void button_init(uint8_t ButtonPort, uint8_t ButtonPin);
void button_read(uint8_t ButtonPort, uint8_t ButtonPin, uint8_t *value);



#endif /* BUTTON_H_ */