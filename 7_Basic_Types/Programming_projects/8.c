#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hours, minutes, minutes_since_midnight;
    char a, b;

    printf("Enter a time: ");
    scanf("%2d:%2d %c%c", &hours, &minutes, %a, %b);

    minutes_since_midnight = hours * 60 + minutes;

    return 0;
}