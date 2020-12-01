# Chapter 13 exercise 2

The C program below receives integers as command line arguments. After receiving the required values, the program calls the subroutine "calculate_and_print" which receives an array and its size passed by the main program, prints the numbers on the screen and prints their sum on the screen.

```c
#include <stdio.h>
#include <stdlib.h>

void calculate_and_print(int *array, int size);

int main (int argc, char *argv[]) {
   int x, size = 5, array[5];
   if (argc == 6) {
      for (x = 0; x < argc - 1; x++) array[x] = atoi(argv[x + 1]);
      calculate_and_print(array, size);
   } else {
      printf("Incorrect number of command line arguments.\n");
   }
   return 0;
}
```

Your task is to write the subroutine "calculate_and_print". The example printout shows how to print the numbers. The main program includes things that are outside the scope of this course, but you only need to write a subroutine that serves the main program.

_Example output_

```
Elements of the array: 43 53 654 65 77
Sum = 892
```
