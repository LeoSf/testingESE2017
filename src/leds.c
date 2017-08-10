#include "leds.h"

static uint16_t * leds;
//uint16_t puerto;

static int LedNumber2hex(uint8_t ledNumber)
{
	return 1<<ledNumber;
}

void LedsCreate(uint16_t * memAdress)
{
//	puerto = 0;
	leds = memAdress;
	*leds = 0;
}

void LedOn(uint8_t ledNumber)
{
		*leds |= LedNumber2hex(ledNumber);
//	*leds |= LedNumber2hex(ledNumber+1);	//para probar la falla de modificación de otro led

}

void LedOff(uint8_t ledNumber)
{
		*leds &= ~LedNumber2hex(ledNumber);
//	*leds |= LedNumber2hex(ledNumber+1);	//para probar la falla de otro led
}

void LedsOn(uint16_t ledsMask)
{
	if (ledsMask == ALL_LEDS_ON)
		*leds = ALL_LEDS_ON;
//		*leds = 0xFFFF;
	else
		*leds |= ledsMask;
//	*leds |= LedNumber2hex(14);
}

void LedsOff(uint16_t ledsMask)
{
	if (ledsMask == ALL_LEDS_OFF)
		*leds = ALL_LEDS_OFF;
	else
		*leds &= ledsMask;
//	*leds |= LedNumber2hex(14);
}
