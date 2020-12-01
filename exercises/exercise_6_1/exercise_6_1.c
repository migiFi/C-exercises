#include <stdio.h>

int main(void) {

   int integer = 0;

   printf("Enter an integer: ");
   scanf("%d", &integer);

   int i;
   for (i = 1; i <= integer; i++) {
      printf("%d\n", i);
   }

   return 0;

}
