#include <CppUTest/TestHarness.h>
#include <CppUTestExt/MockSupport.h>

extern "C" {
#include "../src/module.h"
}

//------------------------------------------------------------------------------
// this is where the functions are tested

TEST_GROUP(FirstTestGroup)
{
	void setup()
	{
	}

	void teardown()
	{
	}
};

TEST(FirstTestGroup, FirstTest)
{
	// given

	// when

	// then
	FAIL("Fail me!");
}

TEST(FirstTestGroup, SecondTest)
{
	// given

	// when

	// then
	STRCMP_EQUAL("hello", "world");
}


