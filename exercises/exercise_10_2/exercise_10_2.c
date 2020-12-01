#include <stdio.h>

int main(void) {

   char word[16];
   int vowels = 0;

   printf("The program calculates the number of vowels.\nEnter a word: ");
   scanf("%s", &word[0]);

   int i;
   for (i = 0; i < 16; i++) {
      if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
         vowels++;
      }
   }

   printf("The word contains %d vowels.", vowels);

   return 0;

}
