#include <stdio.h>

int main(void) {

   int int_number = 0;
   float float_number = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &int_number);

   printf("Enter a decimal number: ");
   scanf("%f", &float_number);

   printf("You entered the integer: %d\n", int_number);
   printf("You entered the decimal number, rounded to two decimal places: %.2f\n", float_number);

   return 0;

}
