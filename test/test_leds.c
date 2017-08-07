#include "unity.h"
#include "leds.h"
#include <stdint.h>

static uint16_t puerto = 0xFFFF;

void setUP()
{
}

void tearDown()
{
}

void test_LedsOffAfterCreate(void)
{
	TEST_ASSERT_EQUAL(0, LedsOffAfterCreate(&puerto));
}
