#include <stdio.h>

int main(){
    int i = 1;
    while (i <= 128) {
        printf("%d ", i);        //1, 2, 4, 8, ...
        i *= 2;
    }
}