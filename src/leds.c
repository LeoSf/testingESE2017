#include "leds.h"


int LedsOffAfterCreate(uint16_t * memAdress){
	int result = -1;

	memAdress = 0;

	if(memAdress == 0)
		result = 0;
	else 
		result =-1; 

	return result;

}

