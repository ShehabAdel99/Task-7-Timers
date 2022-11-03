/*
 * button.c
 *
 * Created: 10/29/2022 6:13:22 PM
 * Author : sheha
 */
#include "button.h"

void button_init(uint8_t ButtonPort, uint8_t ButtonPin)
{
	DIO_init(ButtonPin,ButtonPort, IN);
}
void button_read(uint8_t ButtonPort, uint8_t ButtonPin, uint8_t *value)
{
	for (int i = 0; i < 30000; i++);
	
	
	DIO_read(ButtonPin, ButtonPort, value);
}