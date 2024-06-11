#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

