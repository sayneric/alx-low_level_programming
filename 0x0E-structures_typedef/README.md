

ChatGPT
0x0E. C - Structures, typedef, project
Description
This repository contains the projects and assignments completed for the 0x0E. C - Structures, typedef, project module as part of the Holberton School curriculum. The projects focus on the concepts of structures, typedef, and project organization in the C programming language.

Learning Objectives
Understand the basics of structures in C
Learn how to use typedef to create new names for existing types
Understand the difference between a variable and a structure member
Learn how to use pointers to structures
Gain familiarity with the concept of a "function pointer" and how to use it
Understand how to use malloc and free to dynamically allocate memory
Learn how to organize code into multiple source files and header files
Projects
The repository contains the following projects:

0-print_dog
Create a structure called dog with the following elements:
name: pointer to a char (name of the dog)
age: float (age of the dog)
owner: pointer to a char (owner of the dog)
Write a function print_dog() that prints a struct dog.
1-init_dog
Define a new type dog_t as a new name for the type struct dog.
Write a function init_dog() that initializes a variable of type struct dog.
If any of the pointers are NULL, the function should leave them uninitialized.
2-print_dog
Reusing the struct dog from the previous projects, add the following function prototypes:
void print_dog(struct dog *d);
int _putchar(char c);
Write a function print_dog() that prints a struct dog.
3-structs
Define a new type dog_t as a new name for the type struct dog.
Write a function init_dog() that initializes a variable of type struct dog.
Write a function print_dog() that prints a struct dog.
Write a program that creates a new instance of struct dog, initializes its members, and then prints them.
4-new_dog
Define a new type dog_t as a new name for the type struct dog.
Write a function new_dog() that creates a new instance of struct dog.
Write a function print_dog() that prints a struct dog.
Write a program that creates a new instance of struct dog, initializes its members using the new_dog() function, and then prints them.
5-free_dog
Define a new type dog_t as a new name for the type struct dog.
Write a function new_dog() that creates a new instance of struct dog.
Write a function print_dog() that prints a struct dog.
Write a function free_dog() that frees memory allocated for a struct dog.
Write a program that creates a new instance of struct dog, initializes its members using the new_dog() function, prints them, and then frees the memory.
How to Use
Clone the repository to your local machine using the following command:
bash
Copy code
git clone https://github.com/username/repository.git
Navigate to the project directory.
Compile the C files using the relevant compiler flags.
Run the compiled executable.
Follow the on-screen instructions, if any, to interact with the program.
Author
This project





Send a message




