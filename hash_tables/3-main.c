#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - Check the code for the hash_table_set function.
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

	if (!hash_table_set(ht, "betty", "cool"))
	{
		fprintf(stderr, "Error: Hash table set failed\n");
		return (EXIT_FAILURE);
	}

	if (!hash_table_set(ht, "hetairas", "mentioner") ||
	    !hash_table_set(ht, "heliotropes", "neurospora") ||
	    !hash_table_set(ht, "depravement", "serafins") ||
	    !hash_table_set(ht, "stylist", "subgenera") ||
	    !hash_table_set(ht, "joyful", "synaphea") ||
	    !hash_table_set(ht, "redescribed", "urites") ||
	    !hash_table_set(ht, "dram", "vivency"))
	{
		fprintf(stderr, "Error: Hash table set failed\n");
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

