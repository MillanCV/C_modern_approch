#include <stdio.h>

int main(){
    int number;
    short int factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    factorial = number;

    while(number > 1) {
        number--;
        factorial *= number;
    }

    printf("Factorial of %d: %hd\n", number, factorial);

    return 0;
}