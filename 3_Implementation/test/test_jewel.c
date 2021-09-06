#include "unity.h"
	#include "jewel.h"

	void setUp(void)
	{	}
	void tearDown(void)
	{	}

	void test_jewel(void)
	{
    TEST_ASSERT_EQUAL(1, success(4));
	}
	void test_jewel1(void)
	{
    TEST_ASSERT_EQUAL(1, success(4));
	}
	void test_jewel2(void)
	{
    TEST_ASSERT_EQUAL(1, success(4));
	}

    int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_jewel);
	  	RUN_TEST(test_jewel1);
	  	RUN_TEST(test_jewel2);

  		return UNITY_END();
	}
