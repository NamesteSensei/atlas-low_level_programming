# Singly Linked Lists

## Project Overview
This project focuses on implementing and manipulating singly linked lists in C. Singly linked lists are a fundamental data structure where each node points to the next node in the sequence, making them a useful tool for dynamic data management.

## Learning Objectives
- Understand the structure and uses of singly linked lists.
- Learn how to implement common operations such as traversal, insertion, and deletion.
- Compare linked lists to arrays and understand when to use each.

## Requirements
- **Editors**: Use `vi`, `vim`, or `emacs`.
- **Compilation**: Code will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- **Code Style**: Follow the Betty coding style.
- **Function Restrictions**: Allowed standard library functions include `malloc`, `free`, and `exit`. No use of `printf`, `puts`, `calloc`, `realloc`, etc.
- **Global Variables**: Not allowed.
- **Function Limit**: Maximum 5 functions per file.
- **Headers**: All prototypes must be declared in `lists.h` and include guards should be used.

## Data Structure
We will use the following structure for our singly linked list:

```c
/**
 * struct list_s - singly linked list node
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: This structure defines a node in a singly linked list.
 *              Each node contains a string, its length, and a pointer
 *              to the next node in the list.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

