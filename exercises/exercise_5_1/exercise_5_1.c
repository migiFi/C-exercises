#include <stdio.h>

int main(void) {

   int integer;

   printf("Enter an integer: ");
   scanf("%d", &integer);

   if (integer % 2) {
      printf("Number %d is odd.", integer);
   } else {
      printf("Number %d is even.", integer);
   }

   return 0;

}
