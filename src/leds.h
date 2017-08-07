#include <stdint.h>

void LedsCreate(uint16_t * memAdress);

void LedOn(uint8_t ledNumber);
void LedOff(uint8_t ledNumber);
void LedsOn(uint16_t ledsMask);
void LedsOff(uint16_t ledsMask);
