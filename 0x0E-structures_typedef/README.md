0x0E-structures_typedef

This project explores the concept of structures and typedef in the C programming language. Structures allow us to group related data together into a single unit, while typedef provides a way to create custom type aliases.
Learning Objectives

By completing this project, you will learn:

    How to define a structure in C
    How to use the typedef keyword to create custom type aliases
    How to initialize and access members of a structure
    How to pass structures to functions and return structures from functions
    How to use structures as function parameters and return types
    How to use the arrow operator to access structure members in pointer-to-structure variables

Files

The project consists of the following files:

    dog.h: Defines a structure named struct dog that represents information about a dog, including its name, age, and owner's name. It also defines a typedef alias dog_t for struct dog.
    1-init_dog.c: Defines a function init_dog() that initializes a struct dog variable with the provided values.
    2-print_dog.c: Defines a function print_dog() that prints the content of a struct dog variable. It handles cases where certain members are NULL.
    4-new_dog.c: Defines a function new_dog() that creates a new struct dog dynamically and initializes it with the provided values.
    5-free_dog.c: Defines a function free_dog() that frees the memory allocated for a struct dog created by new_dog().

Requirements

    The code is written in C.
    The code is compiled using gcc.
    The code is executed in a Unix-like operating system.

Usage

To compile and execute the sample programs, follow these steps:

    Clone this repository to your local machine.
    Navigate to the project directory: cd 0x0E-structures_typedef.
    Compile the programs: gcc -Wall -Werror -Wextra -pedantic *.c -o main.
    Run the programs: ./main.

Notes

    The sample programs provided demonstrate the usage of structures and typedef, including initializing structures, printing structure members, dynamically creating structures, and freeing dynamically allocated memory.

Acknowledgments

This project is part of the low-level programming curriculum at ALX, in partnership with Holberton School.
