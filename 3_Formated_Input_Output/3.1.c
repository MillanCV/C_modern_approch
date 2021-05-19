#include <stdio.h>

int main(void) {
    int i = 40;
    float x = 830.21f;

    printf("|%d|%-5d|%-d|%5.7d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}