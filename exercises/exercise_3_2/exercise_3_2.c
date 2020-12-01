#include <stdio.h>

int main(void) {

   float fim = 0.0, rate = 5.94573;

   printf("Enter an amount in FIM: ");
   scanf("%f", &fim);

   printf("FIM converted to euro: %.2f", fim / rate);

   return 0;

}
