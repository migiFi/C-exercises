# Chapter 1 exercise 1

The purpose of this exercise is to introduce you to authoring programs in the C language. The following is a program in C. Your task is to rewrite the program. In the next chapter, you will learn how the program works and what it does.

```c
#include <stdio.h>
/* This is a fine program */

int main(void) {
   int number;
   printf("Enter a number:");
   scanf("%d", &number);
   printf("The number was: %d\n", number);
   return 0;
}
```

_Example output_

```
Enter a number:83
The number was: 83
```
