#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

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

/* Function prototype for print_list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

