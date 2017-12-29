#include "unity.h"

extern void roman_suite(void);

int main(int argc, const char **argv) {
    UNITY_BEGIN();
    roman_suite();
    return UNITY_END();
}