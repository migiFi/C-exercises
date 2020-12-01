#include <stdio.h>

int main(void) {

   int function = 0, first_num = 0, second_num = 0;

   do {

      printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n<0: terminate the program\nSelect calculation: ");
      scanf("%d", &function);

      if (function < 0) break;

      printf("Enter the first number: ");
      scanf("%d", &first_num);
      printf("Enter the second number: ");
      scanf("%d", &second_num);

      switch (function) {
         case 1: {
            printf("%d+%d=%d", first_num, second_num, first_num + second_num);
            break;
         }
         case 2: {
            printf("%d-%d=%d", first_num, second_num, first_num - second_num);
            break;
         }
         case 3: {
            printf("%d*%d=%d", first_num, second_num, first_num * second_num);
            break;
         }
         default: {
            printf("Invalid function selected.");
         }
      }

   } while (function >= 0);

   printf("Terminating the program...\n");

   return 0;

}
