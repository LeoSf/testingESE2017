#include "unity.h"
#include "leds.h"
#include <stdint.h>

static uint16_t puerto;
//uint16_t puerto;

void setUp()
{
	LedsCreate(&puerto);
}

void tearDown()
{
}

void test_LedsOffAfterCreate(void)
{
	uint16_t puerto = 0xFFFF;
	LedsCreate(&puerto);
	TEST_ASSERT_EQUAL(0, puerto);
}

void test_LedOn(void)
{
	int led2test = 4;
	uint16_t puertoStartValue = puerto;
	LedOn(led2test);
	TEST_ASSERT_EQUAL((1<<led2test) | puertoStartValue, puerto);
}

void test_LedOff(void)
{
	int led2test = 4;
	uint16_t puertoStartValue = puerto;
	LedOff(led2test);
	TEST_ASSERT_EQUAL(~(1<<led2test) & puertoStartValue, puerto);
}

void test_LedsOn(void)
{
	uint16_t puertoStartValue = puerto;
	uint16_t ledsMask = (1<<0 | 1<<2 | 1<< 12);
	LedsOn(ledsMask);
	TEST_ASSERT_EQUAL(ledsMask | puertoStartValue, puerto);
}

void test_LedsOff(void)
{
	puerto = 0xFFFF;
	uint16_t puertoStartValue = puerto;
	uint16_t ledsMask = ~(1<<0 | 1<<2 | 1<< 12);
	LedsOff(ledsMask);
	TEST_ASSERT_EQUAL(ledsMask & puertoStartValue, puerto);
}

void test_AllLedsOn(void)
{
//	LedsOn(ALL_LEDS_ON);
	LedsOn(0xFFFF);
	TEST_ASSERT_EQUAL(0xFFFF, puerto);
}

void test_AllLedsOff(void)
{
	puerto = 0xFFFF;
	LedsOff(ALL_LEDS_OFF);
	TEST_ASSERT_EQUAL(0x0000, puerto);
}

void test_LowerLimit(void)
{
	
}

