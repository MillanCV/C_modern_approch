/* 
 * Generates a random walk across a 10 x 10 array.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(){
    char grid[N][N];
    int movement;
    char letter = 'A';

    // initialize grid
    for (int i = 0; i <= N-1; ++i){
        for (int j = 0; j <= N-1; ++j){
            grid[i][j] = '.';
        }
    }

    // randomize
    srand((unsigned) time(NULL));

    for (int i = 0; i <= N-1; ++i){
        for (int j = 0; j <= N-1; ++j){
            movement = rand() % 4; 
            
            switch (movement)
            {
            case 0:
                i++;
                break;
            
            case 1:
                i--;
                break;

            case 2:
                j++;
                break;
            
            case 3:
                j--;
                break;
            }
            if ( i < 0 || i >= 10 || j < 0 || j >= 10) {
                break;
            }

            if (grid[i][j] == '.'){
                grid[i][j] = letter;
            }
           
            letter++;

            if (letter == 'Z')
                break;
        }
    }

    // print the grid
    for (int i = 0; i <= N-1; ++i){
        for (int j = 0; j <= N-1; ++j){
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

}