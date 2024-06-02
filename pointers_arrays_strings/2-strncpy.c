#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the string to be copied to.
 * @src: the string to copy.
 * @n: the maximum number of bytes to use from src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy the src string to the dest string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If src is less than n characters long, the remainder of dest is filled with `\0` */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	/* Return the copied string */
	return dest;
}

