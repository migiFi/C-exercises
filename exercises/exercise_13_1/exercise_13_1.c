#include <stdio.h>

int *address_of_smallest_value(int *numbers, int size);

int main(void) {

   int numbers[] = { 21, 55, 5, 3, 53 };
   int size = 5;

   int *smallest = address_of_smallest_value(numbers, size);

   printf("The smallest number in the array is: %d", *smallest);

   return 0;

}

int *address_of_smallest_value(int *numbers, int size) {
   int *smallest = numbers, i;
   for (i = 0; i < size; i++) {
      if (numbers[i] < *smallest) smallest = &numbers[i];
   }
   return smallest;
}
