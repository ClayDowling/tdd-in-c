#include "roman.h"

static int roman_digit(const char digit) {
    switch (digit) {
        case 'i':
            return 1;
        case 'v':
            return 5;
        case 'x':
            return 10;
        case 'l':
            return 50;
        case 'c':
            return 100;
        case 'd':
            return 500;
        case 'm':
            return 1000;
        default:
            return -1;
    }
}

int roman_value(const char *roman) {
    int value = 0;
    int d0 = roman_digit(roman[0]);
    int d1 = 0;
    for (int i = 1; roman[i]; ++i) {
        d1 = roman_digit(roman[i]);
        if (d1 > d0) {
            value -= d0;
        } else {
            value += d0;
        }
        d0 = d1;
    }
    value += d0;
    return value;
}
