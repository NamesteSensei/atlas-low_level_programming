#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check the length
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int length = 0;
    while (*s++)
        length++;
    return length;
}

