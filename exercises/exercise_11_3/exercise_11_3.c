#include <stdio.h>
#include <string.h>

int main(void) {

   FILE *file_read = fopen("phonedir.txt", "r");

   if (file_read == NULL) {
      printf("Unable to open file.");
      return 0;
   }

   struct person {
       char firstname[20];
       char lastname[20];
       char telephone[12];
   };

   struct person searched;

   printf("Enter first name: ");
   scanf("%s", &searched.firstname[0]);
   printf("Enter last name: ");
   scanf("%s", &searched.lastname[0]);

   int entries = 0;
   fscanf(file_read, "%d", &entries);

   struct person persons[entries];
   struct person current;

   int i, count = -1;
   for (i = 0; i < entries; i++) {
      fscanf(file_read, "%s%s%s", &current.firstname[0], &current.lastname[0], &current.telephone[0]);
      if (strcmp(searched.firstname, current.firstname) != 0 || strcmp(searched.lastname, current.lastname) != 0) {
         persons[++count] = current;
      }
   }

   fclose(file_read);

   FILE *file_write = fopen("phonedir.txt", "w");

   fprintf(file_write, "%d\n", count + 1);

   for (i = 0; i <= count; i++) {
      fprintf(file_write, "%s %s %s\n", persons[i].firstname, persons[i].lastname, persons[i].telephone);
   }

   printf("Data removed from the directory.");

   fclose(file_write);

   return 0;

}
