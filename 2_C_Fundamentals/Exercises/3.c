/* Computes de dimensional  weight of a 12" x 10" x 8" box */

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {

    printf("Por favor, introduzca la altura: ");
    int height = scanf("%d", &height);
    
    printf("Por favor, introduzca el largo: ");
    int length = scanf("%d", &length);
    
    printf("Por favor, introduzca la anchura: ");
    int width = scanf("%d", &width);

    int volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / 166);

    return 0;
}