#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete.
 * 
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    for (i = 0; current != NULL && i < index; i++)
        current = current->next;

    if (current == NULL) /* Index is out of range */
        return (-1);

    if (current->prev)
        current->prev->next = current->next;
    else
        *head = current->next;

    if (current->next)
        current->next->prev = current->prev;

    free(current);
    return (1);
}

