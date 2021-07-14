#include <stdio.h>

int main(){
    double first, second;
    char operator;

    printf("Enter an expression: ");

    scanf("%lf", &first);

    while((operator=getchar()) != '\n'){
        scanf("%lf", &second);
        switch(operator){
            case '+':
                first += second;
                break;
            case '-':
                first -= second;
                break;
            case '*':
                first *= second;
                break;
            case '/':
                first /= second;
                break;
        }
    }

    printf("Value of expression: %.1lf\n", first);
    
    return 0;
}