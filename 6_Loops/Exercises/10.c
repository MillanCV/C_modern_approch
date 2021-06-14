#include <stdio.h>

int main(){

    for (int i = 10; i > 0; --i){
        if ( i == 5) continue;
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 10; i > 0; --i){
        if ( i == 5) goto next;
        printf("%d ", i);
        next: ;
    }
        

    return 0;
}