#include "roman.h"

static int roman_digit(const char digit) {
    switch (digit) {
        case 'i':
            return 1;
        case 'v':
            return 5;
        case 'x':
            return 10;
        default:
            return -1;
    }
}

int roman_value(const char *roman) {
    int value = roman_digit(roman[0]);
    if (0 != roman[1]) {
        value += roman_digit(roman[1]);
    }
    return value;
}
