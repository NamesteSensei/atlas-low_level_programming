#include "main.h"
#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _islower('H');
	printf("%d\n", r);
	r = _islower('o');
	printf("%d\n", r);
	r = _islower(108);
	printf("%d\n", r);
	return (0);
}
