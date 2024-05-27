#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char letter;

	/* Start with 'a' and print each letter until 'z' */
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	/* Print a new line after the alphabet */
	_putchar('\n');
}
