#include "roman.h"
#include "unity.h"

void test_iReturns1(void) { TEST_ASSERT_EQUAL_INT(1, roman_value("i")); }

void test_vReturns5(void) { TEST_ASSERT_EQUAL_INT(5, roman_value("v")); }

void test_xReturns10(void) { TEST_ASSERT_EQUAL_INT(10, roman_value("x")); }

void test_lReturns50(void) { TEST_ASSERT_EQUAL_INT(50, roman_value("l")); }

void test_cReturns100(void) { TEST_ASSERT_EQUAL_INT(100, roman_value("c")); }

void test_dReturns500(void) { TEST_ASSERT_EQUAL_INT(500, roman_value("d")); }

void test_mReturns1000(void) { TEST_ASSERT_EQUAL_INT(1000, roman_value("m")); }

void test_iiReturns2(void) { TEST_ASSERT_EQUAL_INT(2, roman_value("ii")); }

void test_viReturns6(void) { TEST_ASSERT_EQUAL_INT(6, roman_value("vi")); }

void test_ivReturns4(void) { TEST_ASSERT_EQUAL_INT(4, roman_value("iv")); }

void test_iiiReturns3(void) { TEST_ASSERT_EQUAL_INT(3, roman_value("iii")); }

void roman_suite(void) {
    RUN_TEST(test_iReturns1);
    RUN_TEST(test_vReturns5);
    RUN_TEST(test_xReturns10);
    RUN_TEST(test_lReturns50);
    RUN_TEST(test_cReturns100);
    RUN_TEST(test_dReturns500);
    RUN_TEST(test_mReturns1000);
    RUN_TEST(test_iiReturns2);
    RUN_TEST(test_viReturns6);
    RUN_TEST(test_ivReturns4);
    RUN_TEST(test_iiiReturns3);
    return;
}