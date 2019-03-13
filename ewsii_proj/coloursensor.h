#ifndef _TCS3200_
#define _TCS3200_

#include <Arduino.h>

#define s0 0
#define s1 1
#define s2 2
#define s3 3
#define freq_out 4
#define oe 5
#define supply 6

class coloursensor
{
private:
	uint8_t set_freq_scale(uint8_t s);
	uint8_t set_phdiode_type(uint8_t t);
public:
	uint8_t init();
	uint8_t getval(uint8_t t, uint8_t s);
};

#endif
