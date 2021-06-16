#include <stdio.h>

int main(void) {
    int hours, minutes, minutes_since_midnight;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    minutes_since_midnight = hours * 60 + minutes;

    return 0;
}