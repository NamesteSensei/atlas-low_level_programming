#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point for testing the print_list function.
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};  /* Initialize a node with "World" */
    size_t n;

    head = &hello;  /* Set the head to point to the "hello" node */
    new = malloc(sizeof(list_t));  /* Allocate memory for a new node */
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");  /* Duplicate the string "Hello" */
    new->len = 5;  /* Set the length of the string */
    new->next = head;  /* Link the new node to the existing list */
    head = new;  /* Update the head to point to the new node */
    n = print_list(head);  /* Print the list and get the number of nodes */
    printf("-> %lu elements\n", n);  /* Print the number of nodes */

    printf("\n");

    free(new->str);  /* Free the duplicated string */
    new->str = NULL;  /* Set the string pointer to NULL */
    n = print_list(head);  /* Print the list again with a NULL string */
    printf("-> %lu elements\n", n);  /* Print the number of nodes */

    free(new);  /* Free the new node */
    return (0);
}

