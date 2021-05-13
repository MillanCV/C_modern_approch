/* Computes de dimensional  weight of a 12" x 10" x 8" box */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
    int height, length, width, volume, weight;

    printf("Por favor, introduzca la altura: ");
    scanf("%d", &height);
    
    printf("Por favor, introduzca el largo: ");
    scanf("%d", &length);
    
    printf("Por favor, introduzca la anchura: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / 166;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}