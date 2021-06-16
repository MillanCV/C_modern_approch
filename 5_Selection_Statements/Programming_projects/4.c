#include <stdio.h>

int main(void) {
    int speed;

    printf("Enter a wind speed: ");
    scanf("%d", &speed);

    if (speed < 1)
        printf("Wind is Calm\n");
    else if (speed < 4)
        printf("Wind is Light air\n");
    else if (speed < 28)
        printf("Wind is Breeze\n");
    else if (speed < 48)
        printf("Wind is Gale\n");
    else if (speed < 64)
        printf("Wind is Storm\n");
    else
        printf("Wind is Hurricane\n");

    return 0
}