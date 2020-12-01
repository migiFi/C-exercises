#include <stdio.h>

int main(void) {

   int count = 0, sum = 0, n = 0;

   printf("The program calculates the average of scores you enter.\nEnd with a negative integer.\n");

   do {
      printf("Enter score (4-10):");
      scanf("%d", &n);
      if (n >= 4 && n <= 10) {
         sum = sum + n;
         count++;
      }
   } while (n >= 0);

   float average = 1.0f * sum / count;

   printf("You entered %d scores.\nAverage score: %.2f\n", count, average);

   return 0;

}
