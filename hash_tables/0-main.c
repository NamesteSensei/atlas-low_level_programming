#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Check the code for the hash table creation.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    if (ht == NULL)
    {
        fprintf(stderr, "Error: Hash table creation failed\n");
        return (EXIT_FAILURE);
    }

    printf("Hash table created successfully\n");
    printf("Hash table size: %lu\n", ht->size);

    /* Clean up */
    free(ht->array);
    free(ht);

    return (EXIT_SUCCESS);
}

