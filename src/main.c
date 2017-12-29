#include <stdio.h>
#include <stdlib.h>
#include "roman.h"

int main(int argc, char **argv) {
    if (argc > 1) {
        printf("%s => %d\n", argv[1], roman_value(argv[1]));
    }

    return EXIT_SUCCESS;
}