#include <stdio.h>

int main(void) {

   int first_num = 0, second_num = 0, func = 0;

   printf("1: subtraction\n2: addition\n3: multiplication\nSelect function: ");
   scanf("%d", &func);

   printf("Enter the first number: ");
   scanf("%d", &first_num);
   printf("Enter the second number: ");
   scanf("%d", &second_num);

   switch (func) {
      case 1: {
         printf("%d-%d=%d", first_num, second_num, first_num - second_num);
         break;
      }
      case 2: {
         printf("%d+%d=%d", first_num, second_num, first_num + second_num);
         break;
      }
      case 3: {
         printf("%d*%d=%d", first_num, second_num, first_num * second_num);
         break;
      }
      default: {
         printf("An error has occurred while running the program.");
         break;
      }
   }

   return 0;

}
