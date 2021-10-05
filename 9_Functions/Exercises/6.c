#include <stdio.h>

int digits(int n, int k)
{
   int i;
   
   for (i = 1; i < k; i++) {
      n /= 10;
   }

   return n % 10;
}



int main(){
    printf("number: %d\n", digits(829,1));
    printf("number: %d\n", digits(829,2));
    printf("number: %d\n", digits(829,3));
    printf("number: %d\n", digits(829,4));

    return 0;
}