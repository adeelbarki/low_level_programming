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

    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 0-absolute.c
    
  -----------------------------------------------------------------------------------------------------
  ## 1. Age is a case of mind over matter. If you don't mind, it don't matter 
  
  ### Write a function that convert a letter to upper case, if possible.

  - Prototype: char uppercase(char);
  
  Repo:
  
    - GitHub repository: low_level_programming
    - Directory: keep_calm_and_love_programming
    - File: 1-uppercase.c

 -------------------------------------------------------------------------------------------------------
  ## 2. There are only 3 colors, 10 digits, and 7 notes; its what we do with them that's important

  ### Write a function that prints the last digit if an integer.

  - Prototype: void print_last_digit(int);
  
  Repo:
  
    - GitHub repository: low_level_programming
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
  
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 3-print_to_98.c
    
 -----------------------------------------------------------------------------------------------------------
 ## 4. Inventing is a combination of brains and materials. The more brains you use, the less material you need
 
  ### Write a function that prints - on one line - all possible combinations of two different digits.
  
  - Numbers must be separated by coma, followed by a space ,
  - Numbers should be printed in ascending order
  - 01 and 10 are considered as the same combination of the two digits 0 and 1
  - Print only the smallest combination of two digits
  - You are allowed to use the standard library
  - Prototype: void print_combination_2(void);
 
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 4-print_combination_2.c

-------------------------------------------------------------------------------------------------------------
## 5. Numbers have life; they're not just symbols on paper

  ### Write a function that takes an integer in parameter and prints it.
  
  - Prototype: void print_number(int n);
  
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 5-print_number.c

------------------------------------------------------------------------------------------------------------
## 6. Guts are a combination of confidence, courage, conviction, strength of character, stick-to-itiveness, pugnaciousness, backbone, and intestinal fortitude. They are mandatory for anyone who wants to get to and stay at the top

  ### Write a function that prints - on one line - all possible combinations of two two-digit numbers.
  
  - The numbers must be between 0 and 99
  - The two numbers should be separated by a space
  - All numbers should be printed with two digits. 1 should be printed as 01
  - The combination of numbers must be separated by coma, followed by a space ,
  - The combinations of numbers should be printed in ascending order
  - Your 5-print_number.c file will be used to compile
  - 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
  - Prototype: void print_combination_4(void);
 
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 6-print_combination_4.c
 
 -----------------------------------------------------------------------------------------------------------
 ## 7. Fizz-Buzz 
 
  ### The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag. Write a program that prints the numbers from 1 to 100. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
  
  - The output should be one line only, without a new line at the end
  - Each number or word should be separated by a space
  - There should be no space at the end of the output
  - You are allowed to use the standard library
  - About the directory: Your files should be inside a folder called fizzbuzz, which is inside the folder 0x05-keep_calm_and_love_programming
  - Your program will be compiled with the following command: gcc -Wall -Werror -Wextra -pedantic *.c
 
Tips and links

  - Arithmetic operators in C. Look for %
 
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming/fizzbuzz/  
    
------------------------------------------------------------------------------------------------------------------------
## 8. Nature made the natural numbers; All else is the work of women (Advanced)

  ### If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that finds and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
  
  - Your file should contain a main function
  - You are allowed to use the standard library
  - Your program will be compiled with this command: gcc -Wall -Werror -Wextra -pedantic 8-natural.c -o natural

  Repo:
  
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 8-natural.c
    
 -------------------------------------------------------------------------------------------------------------------------
 
 ## 9. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A (Advanced)
 
  ### Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
  
  - Your file should contain a main function
  - The numbers must be separated by coma, followed by a space , 
  - You are allowed to use the standard library
  - Your program will be compiled with this command: gcc -Wall -Werror -Wextra -pedantic 9-fibonacci.c -o fibonacci
  
  Repo:
  
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 9-fibonacci.c
 
--------------------------------------------------------------------------------------------------------------------------
##  10. Even Liber Abbaci 

  ### Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line. (Advanced)
  
  - Your file should contain a main function
  - You are allowed to use the standard library
  - Your program will be compiled with this command: gcc -Wall -Werror -Wextra -pedantic 10-fibonacci.c -o fibonacci
  
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 10-fibonacci.c
    
---------------------------------------------------------------------------------------------------------------------------
##  11. The problem of distinguishing prime numbers from composite numbers and of resolving the latter into their prime factors is known to be one of the most important and useful in arithmetic (advanced)

  ### The prime factors of 1231952 are 2 2 2 2 37 and 2081. Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
  
  - Your file should contain a main function
  - You are allowed to use the standard library
  - Your program will be compiled with this command: gcc -lm -Wall -Werror -Wextra -pedantic 11-prime_factor.c -o prime_factor
  
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 11-prime_factor.c
    
---------------------------------------------------------------------------------------------------------------------------
##  12. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A (Advanced)

  ### Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line
  
  - Your file should contain a main function
  - The numbers must be separated by coma, followed by a space ,
  - You are allowed to use the standard library
  - You are not allowed to use pointers, arrays/tables, or structures
  - You are not allowed to hard code any number (except for 1 and 2 :))
  - You are not allowed to use unsigned or long integers (only int) to encode your numbers
  - Your program will be compiled with this command: gcc -Wall -Werror -Wextra -pedantic 12-fibonacci.c -o fibonacci
  
 Repo:
 
    - GitHub repository: low_level_programming
    - Directory: 0x05-keep_calm_and_love_programming
    - File: 12-fibonacci.c
