#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The secound string.
 *
 * Return: if s1 == NULL, s2 == NULL, or the function fails - NULL.
 * otherwise - a pointer to the concatenated space in memory.\
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len = 0, index = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[len])
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[index])
	{
		concat[index] = s1[index];
		index++;
	}
	concat[index] = '\0';

	return (concat);
}
