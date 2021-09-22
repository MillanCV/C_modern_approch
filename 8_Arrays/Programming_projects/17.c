#include <stdio.h>

int main(){
    int size, elements, column, row;
    int magic_square[99][99];

    printf("This program creates a magic square of a specified number\n");
    printf("The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic number: ");

    scanf("%d", &size);
    elements = size * size;

    row = 0;
    column = (size / 2);

    for (int i = 1; i <= elements; ++i){
        
        
        magic_square[row][column] = i;

        if (row == 0) row = size-1;
        else row--;
        
        if (column == size - 1)  column = 0;
        else column++;

        if (magic_square[row][column] != 0) {
            if (row == size - 1) row = 1;
            else row += 2;

            if (column == 0)  column = size - 1;
            else column--;
        }

      
    }

      for (int i = 0; i < size; i++) {
        for (int j = 0; j <size ; j++) {
            printf("%d ", magic_square[i][j]);
        }
        printf("\n");
    }

    return 0;
}