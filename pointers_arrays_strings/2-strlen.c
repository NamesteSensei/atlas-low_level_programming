#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 * Return: length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (*s++)
{
length++;
}

return (length);
}

