#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: the string to print
 *
 * Return: void
 */
void _puts(char *s)
{
    while (*s)
        _putchar(*s++);
    _putchar('\n');
}

