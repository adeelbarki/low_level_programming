# 0x01 - Hello, World
--------------------------------------------------------------------
Read these programs, and build yours.
adeelbarki@adeel-HP:~$ cat linus.c

#include <stdio.h>

int main(void)

{

puts("Most good programmers do programming not because they expect to get paid or get adulation by the public, but because it is fun to program.");

puts("- Linus Torvalds");

return (98);

}

adeelbarki@adeel-HP:~/hello_world$ gcc linus.c

adeelbarki@adeel-HP:~/hello_world$ ./a.out

Most good programmers do programming not because they expect to get paid or get adulation by the public, but because it is fun to program.
- Linus Torvalds

adeelbarki@adeel-HP:~/hello_world$ echo $?

98

adeelbarki@adeel-HP:~/hello_world$

adeelbarki@adeel-HP:~/hello_world$

adeelbarki@adeel-HP:~/hello_world$ sudo apt-get install gcc-multilib

Reading package lists... Done

Building dependency tree

Reading state information... Done

The following extra packages will be installed:

gcc-4.8-multilib lib32asan0 lib32atomic1 lib32gcc-4.8-dev lib32gcc1

lib32gomp1 lib32itm1 lib32quadmath0 libc6-dev-i386 libc6-dev-x32 libc6-i386

libc6-x32 libx32asan0 libx32atomic1 libx32gcc-4.8-dev libx32gcc1 libx32gomp1

libx32itm1 libx32quadmath0

The following NEW packages will be installed:

gcc-4.8-multilib gcc-multilib lib32asan0 lib32atomic1 lib32gcc-4.8-dev

lib32gcc1 lib32gomp1 lib32itm1 lib32quadmath0 libc6-dev-i386 libc6-dev-x32

libc6-i386 libc6-x32 libx32asan0 libx32atomic1 libx32gcc-4.8-dev libx32gcc1

libx32gomp1 libx32itm1 libx32quadmath0

0 upgraded, 20 newly installed, 0 to remove and 0 not upgraded.

Need to get 11.1 MB of archives.

After this operation, 45.4 MB of additional disk space will be used.

Do you want to continue? [Y/n]

[...]

Setting up lib32gcc-4.8-dev (4.8.4-2ubuntu1~14.04) ...

Setting up libx32gcc-4.8-dev (4.8.4-2ubuntu1~14.04) ...

Setting up gcc-4.8-multilib (4.8.4-2ubuntu1~14.04) ...

Setting up gcc-multilib (4:4.8.2-1ubuntu6) ...

Processing triggers for libc-bin (2.19-0ubuntu6.6) ...

adeelbarki@adeel-HP:~/hello_world$ cat larry_wall.asm

section .data ; data section

; the string to print, 0xa=cr

msg: db "Real programmers can write assembly code in any language", 0xa, "- Larry Wall", 0xa

len equ $-msg ; $ means "here"

; len is a value, not an address


section .text ; code section

global main ; make label available to linker

main: ; standard gcc entry point

mov edx, len ; arg3, length of string to print

mov ecx, msg ; arg2, address of the string

mov ebx, 2 ; arg1, where to write, standard error

mov eax, 4 ; system call number (sys_write)

int 0x80 ; interrupt 80 hex, call kernel

mov ebx, 98 ; exit code, 0=normal

mov eax, 1 ; system call number (sys_exit)

int 0x80 ; interrupt 80 hex, call kernel

adeelbarki@adeel-HP:~/hello_world$ nasm -f elf larry_wall.asm

adeelbarki@adeel-HP:~/hello_world$ gcc -m32 larry_wall.o

adeelbarki@adeel-HP:~/hello_world$./a.out

Real programmers can write assembly code in any language
- Larry Wall
adeelbarki@adeel-HP:~/hello_world$ echo $?

98

adeelbarki@adeel-HP:~/hello_world$

#Requirements.
------------------------------------------------------------------------------------------

#Tasks.
------------------------------------------------------------------------------------------

#0 Action, looks, words, steps, form the alphabet by which you may spell character
------------------------------------------------------------------------------------------
Write a program that prints 10 times the alphabet, in lowercase, followed by a new line.

You can only use the putchar function (every other functions (printf, puts, etc…) are forbidden)

All your code should be in the main function

You can only use putchar twice in your code

Repo:

GitHub repository: holbertonschool-low_level_programming

Directory: 0x01-variables_if_else_while

File: 3-print_alphabets.c


#1 Real programmers can write assembly code in any language
---------------------------------------------------------------------------------------------
Write a program in assembly (x86), that prints Hello, asm, followed by a new line on the standard output.

You have to use the kernel function write
Your program should return 0
Use the Intel syntax to write your assembly code 

Repo:

GitHub repository: holbertonschool-low_level_programming

Directory: 0x01-hello_world

File: 4-hello_asm.asm

#2 Having hit a -Wall, the next logical step is not to bang our heads against it 
-----------------------------------------------------------------------------------------------
Write a C program that prints Hello, C, followed by a new line.

You have to use the function puts

Your program should return 0

Your program should compile without warning when using the -Wall option

-Tips and links-

man 3 puts

man gcc

-Repo:-

GitHub repository: holbertonschool-sysadmin_devops

Directory: 0x03-shell_variables_expansions

File: 1-hello_Wall.c

