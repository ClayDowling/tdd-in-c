#include "roman.h"

int roman_value(const char *roman) {
    switch (roman[0]) {
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