#include "lcd.h"
#include <Wire.h>

uint8_t lcd::read8(uint8_t address)
{
	Wire.beginTransmission(slaveadd);
	Wire.write(address);
	Wire.endTransmission();
	Wire.requestFrom(slaveadd,1);
	return Wire.read();
}

uint8_t lcd::write8(uint8_t address, uint8_t data)
{
	Wire.beginTransmission(slaveadd);
	Wire.write(address);
	Wire.write(data);
	Wire.endTransmission();
	return 0; 
}