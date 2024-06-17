#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If s1 == NULL, s2 == NULL, or the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, index = 0;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;

while (s2[len2])
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));

if (concat == NULL)
return (NULL);

while (*s1)
{
concat[index++] = *s1++;
}

while (*s2)
{
concat[index++] = *s2++;
}

concat[index] = '\0';

return (concat);
}

