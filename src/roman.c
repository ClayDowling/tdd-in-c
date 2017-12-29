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
    int d0 = roman_digit(roman[0]);
    int d1 = 0;
    if (0 != roman[1]) {
        d1 = roman_digit(roman[1]);
    }
    return d1 > d0 ? d1 - d0 : d0 + d1;
}
