#include "leds.h"

static uint16_t * leds;

static int ledNumber2hex(uint8_t ledNumber)
{
	return 1<<ledNumber;
}

void LedsCreate(uint16_t * memAdress)
{
	leds = memAdress;
	*leds = 0;
}

void LedOn(uint8_t ledNumber)
{
	*leds = 1;
}

void LedOff(uint8_t ledNumber)
{
	*leds = 0;
}

void LedsOn(uint16_t ledsMask)
{
	*leds = 1;
}

void LedsOff(uint16_t ledsMask)
{
	*leds = 0;
}
