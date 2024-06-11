#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

