0x12-singly_linked_lists
Description

0x12-singly_linked_lists is a C programming language project that implements a singly linked list data structure. The project contains various functions to manipulate and work with singly linked lists.
Table of Contents

    Description
    Table of Contents
    Requirements
    Usage
    Functions
    Contributing
    License

Requirements

    This project requires a C compiler (e.g., gcc) to build and run the code.
    It is recommended to have a Linux-based environment for smooth execution.

Usage

    Clone the repository: git clone https://github.com/your-username/0x12-singly_linked_lists.git
    Change directory to the project folder: cd 0x12-singly_linked_lists
    Compile the C files using the provided Makefile: make
    Run the program: ./main

Functions

The project provides the following functions to work with singly linked lists:
typedef struct list_s

    Description: A structure representing a singly linked list node.
    Members:
        int n: Holds the integer value of the node.
        struct list_s *next: Points to the next node in the list.

size_t print_list(const list_t *h)

    Description: Prints all the elements of a linked list.
    Parameters:
        h: Pointer to the head node of the list.
    Returns: The number of nodes in the list.

size_t list_len(const list_t *h)

    Description: Returns the number of elements in a linked list.
    Parameters:
        h: Pointer to the head node of the list.
    Returns: The number of nodes in the list.

list_t *add_node(list_t **head, const char *str)

    Description: Adds a new node at the beginning of a linked list.
    Parameters:
        head: Double pointer to the head node of the list.
        str: The string value to be stored in the new node.
    Returns: The address of the new head of the list.

list_t *add_node_end(list_t **head, const char *str)

    Description: Adds a new node at the end of a linked list.
    Parameters:
        head: Double pointer to the head node of the list.
        str: The string value to be stored in the new node.
    Returns: The address of the new node at the end of the list.

void free_list(list_t *head)

    Description: Frees the memory occupied by a linked list.
    Parameters:
        head: Pointer to the head node of the list.

Contributing

Contributions to this project are welcome. If you find any issues or want to add new features, feel free to open a pull request. Please ensure to follow the project's coding style and write appropriate tests for new functionalities.
