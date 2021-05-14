/**********************************************************
 * Remaining balance on a loan after first, second and    *
 * third payment *
 **********************************************************/

#include <stdio.h>

float balance (float, float, float);

float balance (float amount, float monthlyPayment, float interestRate){
    float balance = (amount - monthlyPayment) + (amount * interestRate);
    return balance;
}

int main(void){
    float amount, interestRate, monthlyPayment;

    printf("Enter amount of loan: ");
    scanf("%f", &amount);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    interestRate = (interestRate / 100) / 12;
    
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    amount = balance(amount, monthlyPayment, interestRate);
    printf("Balance remaining after first payment: $%.2f\n", amount);

    amount = balance(amount, monthlyPayment, interestRate);
    printf("Balance remaining after second payment: $%.2f\n", amount);

    amount = balance(amount, monthlyPayment, interestRate);
    printf("Balance remaining after third payment: $%.2f\n", amount);

    return 0;
}