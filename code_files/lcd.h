#ifndef _LCD_
#define _LCD_

#include <Arduino.h>

//  *****LCD Register Definition Begin*****  //

//  *****LCD Register Definition End*****  //

class lcd
{
private:
	uint8_t read8(address);
	uint8_t write8(address, data);
public:
	lcd();
	~lcd();
	
};

#endif