#include <stdio.h>

void create_magic_square(int n, char magic_square[99][99])
{
    int elements, column, row;
    
    elements = n * n;

    row = 0;
    column = (n / 2);

    for (int i = 1; i <= elements; ++i){
        
        
        magic_square[row][column] = i;

        if (row == 0) row = n-1;
        else row--;
        
        if (column == n - 1)  column = 0;
        else column++;

        if (magic_square[row][column] != 0) {
            if (row == n - 1) row = 1;
            else row += 2;

            if (column == 0)  column = n - 1;
            else column--;
        }

      
    }
}

void print_magic_square(int n, char magic_square[99][99]){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {
            printf("%d ", magic_square[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int size;
    int magic_square[99][99];

    printf("This program creates a magic square of a specified number\n");
    printf("The size must be an odd number between 1 and 99\n");
    printf("Enter size of magic number: ");

    scanf("%d", &size);

    create_magic_square(size, magic_square);

    print_magic_square(size, magic_square);
    
    return 0;
}