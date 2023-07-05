0x08 Recursion
Description

This repository contains the solutions for the "0x08 Recursion" project, which is part of the ALX software engineering curriculum. The project focuses on understanding and implementing recursive algorithms in various programming languages.
Project Structure

The project is organized as follows:

css

.
├── 0-puts_recursion.c
├── 1-print_rev_recursion.c
├── 2-strlen_recursion.c
├── 3-factorial.c
├── 4-pow_recursion.c
├── 5-sqrt_recursion.c
├── 6-is_prime_number.c
├── 7-is_palindrome.c
├── main.h
└── README.md

    0-puts_recursion.c: Contains a function that prints a string, followed by a new line, using recursion.
    1-print_rev_recursion.c: Contains a function that prints a string in reverse, using recursion.
    2-strlen_recursion.c: Contains a function that returns the length of a string, using recursion.
    3-factorial.c: Contains a function that returns the factorial of a given number, using recursion.
    4-pow_recursion.c: Contains a function that returns the value of x raised to the power of y, using recursion.
    5-sqrt_recursion.c: Contains a function that returns the natural square root of a number, using recursion.
    6-is_prime_number.c: Contains a function that checks if a given number is a prime number, using recursion.
    7-is_palindrome.c: Contains a function that checks if a string is a palindrome, using recursion.
    main.h: Header file containing function prototypes and necessary header files.
    README.md: This file, providing an overview of the project.

Requirements

The code is written in C and compiled using gcc with the following flags:

bash

$ gcc -Wall -Werror -Wextra -pedantic *.c -o recursion

Usage

To compile the code, navigate to the project directory and run the gcc command mentioned above. Then, execute the resulting binary file:

bash

$ ./recursion

The output will vary depending on the function being called within the main function.
Author

This project was implemented by sayneric
