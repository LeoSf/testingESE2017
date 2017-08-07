#include "leds.h"

static uint16_t * leds;

void LedsCreate(uint16_t * memAdress)
{
	leds = memAdress;
	*leds = 0;
}

int LedsOn(uint8_t ledNumber)
{
	*leds = 1;
}
