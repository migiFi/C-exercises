# Chapter 12 exercise 1

The following is a simple C program that prompts the user for an integer and stores it in the variable x. The program prints the number, calls the subroutine "change_number" passing the number as an argument, and finally prints the number again:

```c
#include <stdio.h>

void change_number(int x);

int main(void) {
   int x;
   printf("Enter the number x: ");
   scanf("%d", &x);
   printf("In the main program: x = %d\n", x);
   change_number(x);
   printf("In the main program: x = %d\n", x);
}
```

Your task is to write the subroutine "change_number" that takes an integer, increases it by three and prints the changed number as shown in the example printout. Pay attention to the value of the variable "x" in different parts of the program. In the following exercise, your subroutine will be supplemented with pointers.

_Example output_

```
Enter the number x: 111
In the main program: x = 111
In the subroutine: x = 114
In the main program: x = 111
```
