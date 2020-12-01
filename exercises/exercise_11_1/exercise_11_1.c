#include <stdio.h>

int main(void) {

   struct person {
       char firstname[20];
       char lastname[20];
       char telephone[11];
   };

   struct person new_person;

   printf("Enter first name: ");
   scanf("%s", &new_person.firstname[0]);
   printf("Enter last name: ");
   scanf("%s", &new_person.lastname[0]);
   printf("Enter telephone number: ");
   scanf("%s", &new_person.telephone[0]);

   FILE *file = fopen("phonedir.txt", "a");

   if (file == NULL) {
      printf("Unable to open file.");
      return 0;
   } else {

      fprintf(file, "%s %s %s\n", new_person.firstname, new_person.lastname, new_person.telephone);
      fclose(file);
      printf("Successfully saved the data.");

   }

   return 0;

}
