/****************************************************
 * Write a program that translates an alphabetic    *
 * into numeric form                                *
 ****************************************************/

#include <stdio.h>

int main() {
    char phone_number[15];
    char c;
    int i = 0;

    printf ("Enter phone number: ");
    i = 0;
    while ((c = getchar())!= '\n') {
        phone_number[i] = c;
        i++;
    }
    phone_number[i] = '\n';

    i = 0;
    while (phone_number[i] != '\n') {
        switch(phone_number[i]) {
            case 'A':
            case 'B':
            case 'C':
                phone_number[i] = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                phone_number[i] = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                phone_number[i] = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                phone_number[i] = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                phone_number[i] = '6';
                break;
            case 'P':
            case 'R':
            case 'S':
                phone_number[i] = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                phone_number[i] = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
                phone_number[i] = '9';
                break;
        }
        i++;
    }
    
    printf("In numeric form: ");
    i = 0;
    while (phone_number[i] != '\n'){
        printf("%c", phone_number[i]);
        i++;
    }
    return 0;
}