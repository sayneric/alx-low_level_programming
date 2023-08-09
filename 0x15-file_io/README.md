0x15-file_io
Description

0x15-file_io is a C programming project that focuses on file input and output operations. This project demonstrates how to handle file manipulation, reading data from files, and writing data to files using the C standard library functions.
Table of Contents

    Description
    Requirements
    Usage
    File Descriptions
    Compilation
    Examples
    Contributing
    License

Requirements

To use and compile this project, you need the following:

    A Linux-based operating system (Ubuntu 14.04 LTS recommended)
    GCC (GNU Compiler Collection)
    Basic knowledge of C programming language

Usage

To use the functions provided in this project, follow these steps:

    Clone this repository to your local machine.
    Navigate to the project directory.
    Include the holberton.h header file in your C source code.
    Compile your C code along with the necessary files in this project using GCC.
    Run the compiled binary to execute the program.

File Descriptions

The project contains the following files:

    holberton.h: Header file that contains function prototypes and necessary includes.
    0-read_textfile.c: C file that contains the implementation of the read_textfile function.
    1-create_file.c: C file that contains the implementation of the create_file function.
    2-append_text_to_file.c: C file that contains the implementation of the append_text_to_file function.
    100-elf_header.c: C file that contains the implementation of a program to display the ELF header of an ELF file.
    main.c: Main C file that demonstrates the usage of the functions.

Compilation

To compile the project, use the following GCC command:

bash

gcc -Wall -Werror -Wextra -pedantic *.c -o file_io

This will generate an executable file named file_io.
Examples

To run the examples provided in the main.c file, execute the following commands:

bash

./file_io example.txt
./file_io some_file.txt Another_text_to_add

Contributing

Contributions to this project are welcome and greatly appreciated. If you find any issues or want to suggest improvements, please create a pull request or submit an issue in the repository.
License

This project is licensed under the MIT License. See the LICENSE file for more information.
