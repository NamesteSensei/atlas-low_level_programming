#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char temp;

	/* get the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* swap the characters of the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}

