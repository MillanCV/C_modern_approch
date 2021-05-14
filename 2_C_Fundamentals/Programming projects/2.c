/************************************************
 * Computes the volumen of a sphere with a 10   *
 * meter radius, using the formula v = 4/3Pir3  *
 ************************************************/

#include <stdio.h>

#define RADIUS 10.0f
#define PI 3.1416f
#define FRACTION ( 4.0f / 3.0f )

int main(void) {
    float volume = FRACTION * PI * RADIUS * RADIUS * RADIUS;

    printf("Volumen of 10 meter radius sphere is %.2f\n", volume);

    return 0;
}