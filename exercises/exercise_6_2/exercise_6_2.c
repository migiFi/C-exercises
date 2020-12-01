#include <stdio.h>

int main(void) {

   int integer = 0, factorial = 1;

   printf("Enter an integer: ");
   scanf("%d", &integer);

   int i;
   for (i = 1; i <= integer; i++) {
      factorial *= i;
   }

   printf("The factorial of %d is %d\n", integer, factorial);

   return 0;

}
