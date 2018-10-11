# Arrays are not pointers! The spoon does not exist

# Requirements

  - All your files will be compiled on Ubuntu 14.04 LTS, using gcc (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4
  - We will use the gcc flags -Wall -Werror -Wextra and -pedantic
  - All your functions must be commented
  - Your functions should be maximum 25 lines long (one statement per line)
  - Your functions should be maximum 80 columns long
  - No more than 5 functions per file
  - Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, etc… is totally forbidden.
  - Allowed function: print_char:

-----------------------------------------------------------------------------------------------------------------------------
- adeelbarki@adeel-HP:~$ cat print_char.c
  - #include <unistd.h>
  - int print_char(char c)
  - {
  -   return (write(1, &c, 1));
  - }
- adeelbarki@adeel-HP:~$

-----------------------------------------------------------------------------------------------------------------------------
  
  - You don’t have to push print_char.c, we will use our file. If you do it won’t be taken into account
  - In the following examples, the main.c files are shown as examples. You can use the same ones to test, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  - If you are using any .h files, you should push them as well

# Tasks
-----------------------------------------------------------------------------------------------------------------------------
##  0. Half the lies they tell about me aren't true

  ### Write a function that prints one char out of 2 of a string.

    - Prototype: void print_string_2(char *str);
    - The function should print only one character out of two, starting with the first one

  Repo:
  
        - GitHub repository: low_level_programming
        - Directory: arrays_are_not_pointers_the_spoon_does_not_exist
        - File: 0-print_string_2.c
      
-----------------------------------------------------------------------------------------------------------------------------
## 1. Winning is only half of it. Having fun is the other half

  ### Write a function that prints half of a string.

    - Prototype: void print_string_half(char *str);
    - The function should print the second half of the string
    - If the number of characters is odd, the function should print the (length_of_the_string - 1) / 2 last characters
    
  Repo:
  
        - GitHub repository: low_level_programming
        - Directory: arrays_are_not_pointers_the_spoon_does_not_exist
        - File: 1-print_string_half.c
      
----------------------------------------------------------------------------------------------------------------------------
##`2. Arrays are not pointers

  ### Write a function that prints each element of an array of integers.

    - Prototype: void print_array(int *a, int n);
    - where n is the number of elements of the array
    - Numbers must be separated by comma, followed by a space ,
    - Your function must display a \n after printing all the elements
    - The numbers should be displayed in the same order as they are stored in the array
    - If n is 0 or less, you must display a new line \n
    - you are allowed to use printf
    - We will compile this way: gcc -Wall -Wextra -Werror -pedantic our_main.c 2-print_array.c our_print_char.c -o print_array
    
 Repo:
 
        - GitHub repository: low_level_programming
        - Directory: arrays_are_not_pointers_the_spoon_does_not_exist
        - File: 2-print_array.c
