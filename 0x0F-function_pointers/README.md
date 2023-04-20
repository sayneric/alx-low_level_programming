0x0F. C - Function pointers
Description

This project contains tasks related to function pointers in C programming language. Function pointers are variables that store the memory address of a function. They can be used to pass functions as arguments to other functions, return functions from functions, and even dynamically allocate memory for functions at runtime.

The tasks in this project cover a range of topics, including function pointer syntax, function pointers as arguments and return types, and the use of function pointers in advanced data structures like linked lists.
Files

The following files are present in this project:
0-print_name.c

A function that prints a name using a function pointer.
1-array_iterator.c

A function that iterates through an array and applies a function to each element using a function pointer.
2-int_index.c

A function that searches for an integer in an array using a function pointer.
3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c

These files contain a program that performs arithmetic operations on two integers using function pointers.
100-main_opcodes.c

A program that prints the opcodes of its own main function.
101-make_me_win.sh

A shell script that generates a C program that makes you win the jackpot in the lottery program.
Compilation and Execution

All the files in this project are to be compiled with gcc. The commands used to compile and execute each file are:
0-print_name.c

sh

$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_name.c -o a
$ ./a

1-array_iterator.c

sh

$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-array_iterator.c -o b
$ ./b

2-int_index.c

sh

$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-int_index.c -o c
$ ./c

3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c

sh

$ gcc -Wall -pedantic -Werror -Wextra 3-get_op_func.c 3-op_functions.c 3-main.c -o calc
$ ./calc 1 + 1

100-main_opcodes.c

sh

$ gcc -Wall -pedantic -Werror -Wextra 100-main_opcodes.c -o d
$ ./d

101-make_me_win.sh

sh

$ chmod u+x 101-make_me_win.sh
$ ./101-make_me_win.sh
$ ./lottery
