#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

