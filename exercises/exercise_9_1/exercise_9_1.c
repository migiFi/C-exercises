#include <stdio.h>

int main(void) {

   FILE *file = fopen("hello.usr", "w");

   fprintf(file, "Hello world!\n");

   printf("Writing to the file was successful.\nClosing the program.\n");

   fclose(file);

   return 0;

}
