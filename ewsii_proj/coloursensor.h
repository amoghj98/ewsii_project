#ifndef _TCS3200_
#define _TCS3200_

#include <Arduino.h>

#define s0 5
#define s1 6
#define s2 7
#define s3 8
#define freq_out 9
#define oe 10

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
