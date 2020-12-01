#include <stdio.h>

int main(void) {

   FILE *file = fopen("numbers.s", "r");

   if (file == NULL) {
      printf("Unable to open file for reading.");
      return 0;
   } else {

      int nums[4];

      int i;
      for (i = 0; i < 4; i++) fscanf(file, "%d", &nums[i]);

      printf("Numbers found in the file numbers.s:\n");
      printf("%d, %d, %d and %d", nums[0], nums[1], nums[2], nums[3]);

      int sum = nums[0] + nums[1] + nums[2] + nums[3];
      printf("Sum of the numbers: %d", sum);

      fclose(file);

   }

   return 0;

}
