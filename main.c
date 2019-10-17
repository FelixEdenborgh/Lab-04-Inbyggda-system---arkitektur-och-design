#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <string.h>
#include <util/delay.h>

#include "adc.h"
#include "gpio.h"
#include "i2c.h"
#include "serial.h"
#include "timer.h"


void main (void) {

	i2c_init();
	uart_init();

	//sei();

	while (1) {
	//	printf("%x\r\n", eeprom_read_byte(0xFA));
	//	_delay_ms(2000);
	uint8_t name[] = "Felix";
	uint8_t a;

	for(int i = 0; i <= 4; i ++){

		name[i];
		a = 0x10 + i;
		eeprom_write_byte(a, name[i]);
		printf("%c\r\n", eeprom_read_byte(a));
		_delay_ms(2000);
	}


	}
}
