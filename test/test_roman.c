#include "roman.h"
#include "unity.h"

void test_iReturns1(void) { TEST_ASSERT_EQUAL_INT(1, roman_value("i")); }

void test_vReturns5(void) { TEST_ASSERT_EQUAL_INT(5, roman_value("v")); }

void test_xReturns10(void) { TEST_ASSERT_EQUAL_INT(10, roman_value("x")); }

void test_iiReturns2(void) { TEST_ASSERT_EQUAL_INT(2, roman_value("ii")); }

void test_viReturns6(void) { TEST_ASSERT_EQUAL_INT(6, roman_value("vi")); }

void roman_suite(void) {
    RUN_TEST(test_iReturns1);
    RUN_TEST(test_vReturns5);
    RUN_TEST(test_xReturns10);
    RUN_TEST(test_iiReturns2);
    RUN_TEST(test_viReturns6);
    return;
}