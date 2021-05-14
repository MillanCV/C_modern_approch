/************************************************
 * Computes the volumen of a sphere with a user *
 * specified radius, using the formula          *
 * v = 4/3Pir3                                  *
 ************************************************/

#include <stdio.h>

#define PI 3.1416f
#define FRACTION ( 4.0f / 3.0f )

int main(void) {
    float radius, volume;
    
    printf("Please, enter a radius in meters: ");
    scanf("%f", &radius);

    volume = FRACTION * PI * radius * radius * radius;

    printf("Volumen of 10 meter radius sphere is %.2f\n", volume);

    return 0;
}