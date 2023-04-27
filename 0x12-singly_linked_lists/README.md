# Singly Linked Lists

In this project, we will learn about singly linked lists and how to implement them in C.

## Description

A singly linked list is a data structure that consists of a sequence of nodes. Each node contains an element and a reference (or pointer) to the next node in the sequence. The first node is called the head and the last node is called the tail. The tail node points to NULL.

Singly linked lists can be used to implement other data structures such as stacks, queues, and hash tables. They can also be used to represent sparse arrays and graphs.

## Files

The following files are used in this project:

### `lists.h`

This header file contains the function prototypes for the functions used in the project.

### `0-print_list.c`

This file contains the `print_list` function that prints all the elements of a singly linked list.

### `1-list_len.c`

This file contains the `list_len` function that returns the number of elements in a singly linked list.

### `2-add_node.c`

This file contains the `add_node` function that adds a new node at the beginning of a singly linked list.

### `3-add_node_end.c`

This file contains the `add_node_end` function that adds a new node at the end of a singly linked list.

### `4-free_list.c`

This file contains the `free_list` function that frees the memory allocated for a singly linked list.

## Compilation

To compile the files, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o lists
```

This will generate an executable file called `lists`.

## Usage

To run the program, use the following command:

```
./lists
```

This will run the program and print the output to the terminal.

## Credits

This project was completed as part of the curriculum for the ALX  School Full-Stack Software Engineering program.
