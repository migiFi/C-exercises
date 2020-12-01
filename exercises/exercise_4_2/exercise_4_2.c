#include <stdio.h>

int main(void) {

   int integer = 0;

   printf("Enter an integer: ");
   scanf("%d", &integer);

   int result = integer % 2;
   printf("The number is %d", result);

   return 0;

}
