#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
    int i = 0;

    /* print every other character of the string */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i += 2;
    }

    _putchar('\n');
}

