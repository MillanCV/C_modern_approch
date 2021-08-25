/*
 * Write a BIFF filter that reads a message entered by the user
 * and translates it into BIFF speak
 * Low case to uper carse
 * Append 10 exclamations marks.
 * A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE_MESSAGE ((int) (sizeof(message) / sizeof(message[0])))
#define MESSAGE_LENGTH 50

int main() {
    char message[MESSAGE_LENGTH];

    printf("Enter message: ");
    for (int i = 0; i <= MESSAGE_LENGTH; ++i){
        message[i] = getchar();
        if (message[i] == '\n'){
            break;
        }
    }

    printf("In BIFF-speak: ");
    for (int i = 0; i <= MESSAGE_LENGTH; ++i){
        if (message[i] == '\n'){
            break;
        }
        else {
            switch (message[i])
            {
            case 'a': case 'A':
                putchar('4');
                break;
            case 'b': case 'B':
                putchar('8');
                break;
            case 'e': case 'E':
                putchar('3');
                break;
            case 'i': case 'I':
                putchar('1');
                break;
            case 'o': case 'O':
                putchar('0');
                break;
            case 's': case 'S':
                putchar('5');
                break;
            default:
                putchar(toupper(message[i]));
                break;
            }
        }

    }
    printf("!!!!!!!!!\n");

    return 0;
}