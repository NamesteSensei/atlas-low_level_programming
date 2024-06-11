#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 if successful, 1 if one of the numbers contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

