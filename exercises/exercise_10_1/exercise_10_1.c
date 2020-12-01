#include <stdio.h>

int main(void) {

   char firstname[16], lastname[21], filename[13];

   printf("The program saves your first and last name into a file.");
   printf("Enter your first name: ");
   scanf("%s", &firstname[0]);
   printf("Enter your last name: ");
   scanf("%s", &lastname[0]);
   printf("File where you want to save your name: ");
   scanf("%s", &filename[0]);

   FILE *file = fopen(filename, "w");

   fprintf(file, "%s %s", firstname, lastname);
   printf("Successfully saved the data!");
   fclose(file);

   return 0;

}
