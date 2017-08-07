#include "unity.h"
#include "leds.h"
#include <stdint.h>

static uint16_t puerto;

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
	LedOn(led2test);
	TEST_ASSERT_EQUAL((1<<led2test) , (1<<led2test)& puerto);
}

void test_LedOff(void)
{
	int led2test = 4;
	LedOff(led2test);
	TEST_ASSERT_EQUAL(~(1<<led2test), ~(1<<led2test)| puerto);
}

void test_LedsOn(void)
{
	LedsOn(1);
	TEST_ASSERT_EQUAL(1, puerto);
}

void test_LedsOff(void)
{
	LedsOff(1);
	TEST_ASSERT_EQUAL(0, puerto);
}

