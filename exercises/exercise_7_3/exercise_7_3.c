#include <stdio.h>

int largest(int first, int second, int third);
int smallest(int first, int second, int third);

int main(void) {

   int first = 0, second = 0, third = 0;

   printf("Enter the 1. number: ");
   scanf("%d", &first);
   printf("Enter the 2. number: ");
   scanf("%d", &second);
   printf("Enter the 3. number: ");
   scanf("%d", &third);

   int largest_num = largest(first, second, third);
   int smallest_num = smallest(first, second, third);

   printf("Among the numbers you entered,\nthe largest was %d and the smallest was %d.", largest_num, smallest_num);

   return 0;

}

int largest(int first, int second, int third) {
   int result = first;
   if (second > result) result = second;
   if (third > result) result = third;
   return result;
}

int smallest(int first, int second, int third) {
   int result = first;
   if (second < result) result = second;
   if (third < result) result = third;
   return result;
}
