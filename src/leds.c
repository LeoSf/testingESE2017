#include "leds.h"

static uint16_t * leds;

void LedsCreate(uint16_t * memAdress)
{
	leds = memAdress;
	*leds = 0;
}

void LedsOn(uint8_t ledNumber)
{
	*leds = 1;
}

void LedsOff(uint8_t ledNumber)
{
	*leds = 0;
}
