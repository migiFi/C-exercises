#include <stdio.h>

int main(void) {

   int sum = 0;
   int matrix[5][5] = {
      4, 6, 25, 88, 5,
      34, 5, 300, 4, 65,
      78, 43, 11, 90, 125,
      98, 585, 12, 63, 21,
      45, 35, 9, 5, 1
   };

   printf("In the array:\n");

   int i, j;
   for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
         sum += matrix[i][j];
         if (j == 4) {
            printf("%d\n", matrix[i][j]);
         } else {
            printf("%d\t", matrix[i][j]);
         }
      }
   }

   printf("\n\nthe sum of the elements is %d", sum);

   return 0;

}
