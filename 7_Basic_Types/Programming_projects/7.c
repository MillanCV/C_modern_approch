/***************************************************************************
 * modify addfrac.c from section 3.2 to enter both fraction at same time   *
 ***************************************************************************/

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2;
    float result_num, result_denom;
    char operation;

    printf("Enter two fractions separated by a operator: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1,&operation,&num2, &denom2);

    switch (operation) {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 / num2;
            result_denom = denom1 / denom2;
            break;
        default:
            printf("Wrong operation\n");
    }

    printf("The result is %f/%f\n", result_num, result_denom);

    return 0;
}