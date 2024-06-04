#include "main.h"
#include <ctype.h>

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	/* Capitalize the first character if it is a letter */
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}

	/* Go through the string, looking for word separators */
	for (i = 1; s[i] != '\0'; i++)
	{
		/* Check if the character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i - 1] == separators[j])
			{
				/* If the next character is a lowercase letter, capitalize it */
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 'a' + 'A';
				}
			}
		}
	}

	return (s);
}

