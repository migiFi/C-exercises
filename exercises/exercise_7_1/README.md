# Chapter 7 exercise 1

Your task is to supplement the source code below with the missing functions. The program prints the following text in accordance with the user's selections:

```
Choice 1: "The cat says meow!"
Choice 2: "The dog says wuff-wuff!"
Choice 3: "The cow says moo!"
```

Upon execution, the program asks the user to select one of the animals. Once selected, the program calls a function that prints out the correct utterance. After executing the function, the program returns to ask the user for a new choice. The program is terminated by a negative integer.

Code to be supplemented:

```c
#include <stdio.h>

void cat(void);
void dog(void);
void cow(void);

int main(void) {
   int choice;
   do {
      printf("1: cat\n2: dog\n3: cow\n");
      printf("End with a negative number.\n");
      printf("Select animal: ");
      scanf("%d", &choice);
      if(choice < 0) {
         printf("Terminating the program...");
      } else if(choice == 1) {
         cat();
      } else if(choice == 2) {
         dog();
      } else if(choice == 3) {
         cow();
      } else {
         printf("You entered an invalid number.\n\n");
      }
   } while(choice>0);

   return 0;
}
```

**Hint:** The purpose of the exercise is to provide you with a feeling for writing functions. Do not copy the source code, only write functions that print the output. The functions are declared in the prototypes before the main program.

_Example output_

```
1:cat
2:dog
3:cow
End with a negative number.
Select animal:1
The cat says meow!

1:cat
2:dog
3:cow
End with a negative number.
Select animal:2
The dog says wuff-wuff!

1:cat
2:dog
3:cow
End with a negative number.
Select animal:3
The cow says moo!

1:cat
2:dog
3:cow
End with a negative number.
Select animal:-1
Terminating the program...
```
