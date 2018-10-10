# Let's go deeper
------------------------------------------------------------------------
# Requirements
------------------------------------------------------------------------
All your files will be compiled on Ubuntu 14.04 LTS, using gcc

We will use the gcc flags -Wall -Werror -Wextra and -pedantic

All your functions must be commented

Your functions should be maximum 25 lines long (one statement per line)

Your functions should be maximum 80 columns long

No more than 5 functions per file

Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, etc… is totally forbidden.

Allowed function: print_char:
-------------------------------------------------------------------------
adeelbarki@adeel-HP:~$ cat print_char.c

#include <unistd.h> 

int print_char(char c)

{

  return (write(1, &c, 1));
  
}

adeelbarki@adeel-HP:~$

-------------------------------------------------------------------------
You don’t have to push print_char.c, we will use our file. If you do it won’t be taken into account.

In the following examples, the main.c files are shown as examples. You can use the same ones to test, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

If you are using any .h files, you should push them as well.

You must use recursion to solve the following tasks

You are not allowed to use any type of loops at all, in any function

Tips & links

Google

#Tasks
----------------------------------------------------------------------------

#0 You mustn't be afraid to dream a little bigger, darling
---------------------------------------------------------------------------

Write a function that returns the factorial of a given number.

Prototype: int factorial(int n);

If n is lower than 0, the function should return -1 to indicate an error

Factorial of 0 is 1

If the result can not be stored in an int return -1

#1 Once an idea has taken hold of the brain it's almost impossible to eradicate
----------------------------------------------------------------------------

Write a function that returns the value of x raised to the power of y.

Prototype: int power(int x, int y);

If y is lower than 0, the function should return -1

If the result can not be stored in an int, return -1

If x is negative, return -1

#2 Your subconscious is looking for the dreamer 
-----------------------------------------------------------------------------

Write a function that returns the natural square root of a number

Prototype: int square_root(int n);

If n does not have an natural square root, the function should return -1

#3 Inception. Is it possible?
-----------------------------------------------------------------------------

Write a function that returns 1 if a number is a prime number, 0 otherwise.

Prototype: int is_prime_number(int n);

#4 They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything 
------------------------------------------------------------------------------

Write a function that returns 1 if a string is a palindrome and 0 if not.

Prototype: int is_palindrome(char *s);

Remember: you are not allowed to use loops in any of your functions

#5 Inception. Now, before you bother telling me it's impossible...
------------------------------------------------------------------------------

Write a function that compares two strings and returns 1 if the strings can be considered as identical, and 0 otherwise.

Prototype: int shell_comp(char *s1, char *s2);

s2 can contain the special character *.

The special char * can replace any string (including an empty string)
