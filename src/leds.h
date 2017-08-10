#include <stdint.h>

#define LED_COUNT 16

#define 	ALL_LEDS_OFF 	0
#define	ALL_LEDS_ON  	0xFFFF
//#define	ALL_LEDS_ON  	2^LED_COUNT-1

/*
enum{
	ALL_LEDS_OFF = 0,
	ALL_LEDS_ON = 2^LED_COUNT - 1
//	ALL_LEDS_ON = 0xFF
};
*/
void LedsCreate(uint16_t * memAdress);

void LedOn(uint8_t ledNumber);
void LedOff(uint8_t ledNumber);
void LedsOn(uint16_t ledsMask);
void LedsOff(uint16_t ledsMask);
