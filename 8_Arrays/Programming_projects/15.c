#include <stdio.h>

#define LENGTH 80

int main(){
    char message[LENGTH];
    char c;
    int shift_amount;

    printf("Enter message to be encripted: ");
    for (int i = 0; ((c = getchar()) != '\n') && i < LENGTH; ++i)
        message[i] = c;

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    for (int i = 0; i < LENGTH; ++i) {
        if (message[i] == '\n')
            break;
        if (message[i] >= 'A' && message[i] <= 'Z')
            message[i] = ((message[i] - 'A') + shift_amount) % 26 + 'A';
        if (message[i] >= 'a' && message[i] <= 'z')
            message[i] = ((message[i] - 'a') + shift_amount) % 26 + 'a';
    }
    
    printf("Encrypted message: %s\n", message);

    

    return 0;
}