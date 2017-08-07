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
	*leds |= ledNumber2hex(ledNumber);
}

void LedOff(uint8_t ledNumber)
{
	*leds &= ~ledNumber2hex(ledNumber);
}

void LedsOn(uint16_t ledsMask)
{
	*leds = 1;
}

void LedsOff(uint16_t ledsMask)
{
	*leds = 0;
}
