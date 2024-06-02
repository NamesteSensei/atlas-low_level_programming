#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the string to be appended to.
 * @src: the string to append.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the dest string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Copy the src string to the end of the dest string */
	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/* Add the null byte at the end */
	dest[i + j] = '\0';

	/* Return the concatenated string */
	return (dest);
}

