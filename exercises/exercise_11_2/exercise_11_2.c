#include <stdio.h>

int main(void) {

   FILE *file = fopen("phonedir.txt", "r");

   struct person {
       char firstname[20];
       char lastname[20];
       char telephone[11];
   } current;

   if (file == NULL) {
      printf("Unable to read file.");
      return 0;
   } else {

      int entries = 0;
      fscanf(file, "%d", &entries);

      int i;
      for (i = 0; i < entries; i++) {
         fscanf(file, "%s%s%s", &current.firstname[0], &current.lastname[0], &current.telephone[0]);
         printf("%s %s %s\n", current.firstname, current.lastname, current.telephone);
      }

      fclose(file);

   }

   return 0;

}
