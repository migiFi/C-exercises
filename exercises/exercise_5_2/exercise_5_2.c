#include <stdio.h>

int main(void) {

   char drink;
   int cups = 0;

   printf("Do you drink coffee or tea (c/t)?");
   scanf("%c", &drink);

   printf("How many cups do you drink daily: ");
   scanf("%d", &cups);

   if (drink == 'c' && cups >= 0 && cups <= 2) {
      printf("You don't drink a lot of coffee, do you?\n");
   } else if (drink == 'c' && cups >= 3 && cups <= 20) {
      printf("You drink a lot of coffee!\n");
   } else if (drink == 't' && cups >= 0 && cups <= 2) {
      printf("You do not drink a lot of tea.\n");
   } else if (drink == 't' && cups >= 3 && cups <= 20) {
      printf("You drink a lot of tea!\n");
   } else {
      printf("An error occurred in the program!");
   }

   return 0;

}
