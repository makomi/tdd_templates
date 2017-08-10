#include "../src/module.hh"

#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>

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

//------------------------------------------------------------------------------

int main(int ac, char** av)
{
	return CommandLineTestRunner::RunAllTests(ac, av);
}

