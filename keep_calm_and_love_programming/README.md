# 0x05 - Keep calm and love programming
-----------------------------------------------------------------------------------------------------

# Requirements
-----------------------------------------------------------------------------------------------------

  1. All your files will be compiled on Ubuntu 14.04 LTS, using gcc (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4
  2. We will use the gcc flags -Wall -Werror -Wextra and -pedantic
  3. All your functions must be commented
  4. Your functions should be maximum 25 lines long (one statement per line)
  5. Your functions should be maximum 80 columns long
  6. No more than 5 functions per file
  7. Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, etc… is totally forbidden.
  8. Allowed function: print_char:
  
----------------------------------------------------------------------------------------------------
- adeelbarki@adeel-HP:~$ cat print_char.c
    - #include <unistd.h>
    - int print_char(char c)
    - {
    - return (write(1, &c, 1));
    - }
- adeelbarki@adeel-HP:~$

------------------------------------------------------------------------------------------------------

  9.  You don’t have to push print_char.c, we will use our file. If you do it won’t be taken into account
  10. In the following examples, the main.c files are shown as examples. You can use the same ones to test, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
  11. If you are using any .h files, you should push them as well
  
  # Tasks
  --------------------------------------------------------------------------------------------------
  ## 0. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
  
  ### Write a function that returns the absolute value of an integer.

  - Prototype: int absolute(int);
  
 Repo:

    - GitHub repository: holbertonschool-low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 0-absolute.c
    
  -----------------------------------------------------------------------------------------------------
  ## 1. Age is a case of mind over matter. If you don't mind, it don't matter 
  
  ### Write a function that convert a letter to upper case, if possible.

  - Prototype: char uppercase(char);
  
  Repo:
  
    - GitHub repository: holbertonschool-low_level_programming
    - Directory: keep_calm_and_love_programming
    - File: 1-uppercase.c

 -------------------------------------------------------------------------------------------------------
  ## 2. There are only 3 colors, 10 digits, and 7 notes; its what we do with them that's important

  ### Write a function that prints the last digit if an integer.

  - Prototype: void print_last_digit(int);
  
  Repo:
  
    - GitHub repository: holbertonschool-low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 2-print_last_digit.c
    
---------------------------------------------------------------------------------------------------------
## 3. Holberton School, 98 Battery Street, San Francisco CA 94111

  ### Write a function that takes an integer as argument, and prints - on one line - all numbers from its value to 98, followed by a new line.
  
  - Prototype: void print_to_98(int);
  - Numbers must be separated by coma, followed by a space ,
  - Numbers should be printed in order
  - The first printed number should be the argument passed to your function
  - The last printed number should be 98
  - You are allowed to use the standard library
  
  Repo:
  
    - GitHub repository: holbertonschool-low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 3-print_to_98.c
    
 -----------------------------------------------------------------------------------------------------------
 ## 
