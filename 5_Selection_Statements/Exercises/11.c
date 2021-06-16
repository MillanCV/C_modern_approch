#include <stdio.h>

int main(void) {
    int area_code;

    while (1) {
    printf("please enter the area code: ");
    scanf("%d", &area_code);

    switch(area_code) {
        case 229:
            printf("Major city is Albany\n"); break;
        case 404: printf("Major city is Albany\n"); break;
        case 470: printf("Major city is Atlanta\n"); break;
        case 478: printf("Major city is Atlanta\n"); break;
        case 678: printf("Major city is Macon\n"); break;
        case 706: printf("Major city is Atlanta\n"); break;
        case 762: printf("Major city is Columbus\n"); break;
        case 770: printf("Major city is Atlanta\n"); break;
        case 912: printf("Major city is Savannah\n"); break;
        default: printf("Area code not recognized\n"); break;
    }

    }


    return 0;
}