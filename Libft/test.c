#include "common.h"
#include <stdio.h>

int main()
{
    printf("%c\n", tolower(-382));
    printf("%c\n", tolower(EOF));
    for (int c = 10; c <= 130; c++) {
        printf("%c: %c\n", c, tolower(c));
    }
}