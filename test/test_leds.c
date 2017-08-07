#include "unity.h"
#include "leds.h"

void setUP()
{
}

void tearDown()
{
}

void test_LedsOffAfterCreate(void)
{
	TEST_ASSERT_EQUAL(0, LedsOffAfterCreate);
}
