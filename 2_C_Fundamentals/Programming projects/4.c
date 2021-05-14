/********************************************************
 * Enter dollars and cents and compute with 5% taxes    *
 ********************************************************/

#include <stdio.h>

#define TAX 5

int main(void){
    float ammount;

    printf("Enter an amount: ");
    scanf("%f", &ammount);

    ammount += (ammount * TAX) / 100;

    printf("With tax added: $%.2f\n", ammount);

    return 0;
}