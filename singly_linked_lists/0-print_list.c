#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function traverses the list starting from the head
 *              and prints the string and length of each node. If a node's
 *              string is NULL, it prints [0] (nil). It returns the total
 *              number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;  /* Initialize the node counter */

    /* Traverse the list */
    while (h != NULL)
    {
        /* Print the current node's string and length */
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);

        /* Move to the next node */
        h = h->next;
        count++;  /* Increment the node counter */
    }

    return count;  /* Return the total number of nodes */
}

