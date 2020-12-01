#include <stdio.h>

int main(void) {

   int first_num = 0, second_num = 0;

   printf("Enter the first number: ");
   scanf("%d", &first_num);
   printf("Enter the second number: ");
   scanf("%d", &second_num);

   printf("%d+%d=%d\n", first_num, second_num, first_num + second_num);
   printf("%d-%d=%d\n", first_num, second_num, first_num - second_num);
   printf("%d*%d=%d\n", first_num, second_num, first_num * second_num);

   return 0;

}
