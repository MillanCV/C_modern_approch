#include <stdio.h>

int main(void) {
    int teenager, age;

    age = 17;

    teenager = (age >= 13 && age <= 19) ? 1 : 0;
    printf("%d\n", teenager);

    age = 10;

    teenager = (age >= 13 && age <= 19) ? 1 : 0;
    printf("%d\n", teenager);
    age = 20;

    teenager = (age >= 13 && age <= 19) ? 1 : 0;
    printf("%d\n", teenager);

    return 0;
}