#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point to test the append_text_to_file function.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}

	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);

	return (0);
}

