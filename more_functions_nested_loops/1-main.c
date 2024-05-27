#include "main.h"
#include <stido.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %\n", c, _isdigit(c));
	return (0);
}
