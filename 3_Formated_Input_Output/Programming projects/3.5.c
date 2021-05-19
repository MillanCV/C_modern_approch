/************************************************
 * Enter the numbers form 1 to 16 and displays  *
 * in a 4 by 4 arrangement, followed by the sum *
 * of the rows, columns and diagonals           *
 ************************************************/
#include <stdio.h>

int main(void) {
    int num_1, num_2, num_3, num_4,
        num_5, num_6, num_7, num_8,
        num_9, num_10, num_11, num_12,
        num_13, num_14, num_15, num_16;
    int row_1, row_2, row_3, row_4;
    int column_1, column_2, column_3, column_4;
    int diagonal_1, diagonal_2;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",   &num_1, &num_2, &num_3, &num_4,
                                                                &num_5, &num_6, &num_7, &num_8,
                                                                &num_9, &num_10, &num_11, &num_12,
                                                                &num_13, &num_14, &num_15, &num_16);

    printf("%d\t%d\t%d\t%d\n", num_1, num_5, num_9, num_13);
    printf("%d\t%d\t%d\t%d\n", num_3, num_11, num_15, num_7);
    printf("%d\t%d\t%d\t%d\n", num_2, num_6, num_10, num_14);
    printf("%d\t%d\t%d\t%d\n", num_4, num_8, num_16, num_12);

    row_1 = num_1 + num_5 + num_9 + num_13;
    row_2 = num_3+ num_11+ num_15+ num_7;
    row_3 = num_2+ num_6+ num_10+ num_14;
    row_4 = num_4+ num_8+ num_16+ num_12;

    column_1 = num_1 + num_3 + num_2 + num_4;
    column_2 = num_5+ num_11+ num_6+ num_8;
    column_3 = num_9+ num_15+ num_10+ num_16;
    column_4 = num_13+ num_7+ num_14+ num_12;

    diagonal_1 = num_1 + num_11 + num_10 + num_12;
    diagonal_2 = num_4 + num_6 + num_15 + num_13;

    printf("Row sums: %d %d %d %d\n", row_1, row_2, row_3, row_4);
    printf("Column sums: %d %d %d %d\n", column_1, column_2, column_3, column_4);
    printf("Diagonal sums: %d %d\n", diagonal_1, diagonal_2);

    return 0;
}