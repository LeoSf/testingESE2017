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

