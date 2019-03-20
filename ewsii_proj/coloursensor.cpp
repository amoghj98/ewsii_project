#include "coloursensor.h"

/*
Frequency scaling is used when the microcontroller is incapable of measuring the pulse-widths generated by the sensor.
Scaling reduces output frequencies to measurable values.
The TCS3200 has 3 scaling options - 2%, 20% and 100% scaling
2% - The output wave has a frequency equal to 2% of the actual frequency
and so on......
*/
uint8_t coloursensor::set_freq_scale(uint8_t s)
{
	switch(s)
	{
		case 0: digitalWrite(supply, false);
		break;
		case 2: digitalWrite(s0, false);
		digitalWrite(s1, true);
		break;
		case 20: digitalWrite(s0,true);
		digitalWrite(s1,false);
		break;
		case 100: digitalWrite(s0, true);
		digitalWrite(s1, true);
		break;
	}
}

/*
Setting the photodiode type decides the colour sensed by the sensor.
The TCS3200 can sense 4 colours - Red, Green, Blue and Clear.
Colour   Code
Red       0
Green     3
Blue      1
Clear     2
*/
uint8_t coloursensor::set_phdiode_type(uint8_t t)
{
	switch(t)
	{
		case 0: digitalWrite(s2, false);
		digitalWrite(s3, false);
		break;
		case 1: digitalWrite(s2, false);
		digitalWrite(s3, true);
		break;
		case 2: digitalWrite(s2,true);
		digitalWrite(s3,false);
		break;
		case 3: digitalWrite(s2, true);
		digitalWrite(s3, true);
		break;
	}
}

uint8_t coloursensor::init()                  // initialisation function
{
	digitalWrite(supply,true);
	digitalWrite(oe, true);
	digitalWrite(s0, false);
	digitalWrite(s1, false);
	digitalWrite(s2, false);
	digitalWrite(s3, false);
	delayMicroseconds(110);
}

uint8_t coloursensor::getval(uint8_t t, uint8_t s)
{
	uint16_t th,ttot;
	set_phdiode_type(t);
	set_freq_scale(s);
	digitalWrite(oe, false);
	th=pulseIn(freq_out, false);
  digitalWrite(oe,true);
	ttot=2*th;
	return ttot;
}