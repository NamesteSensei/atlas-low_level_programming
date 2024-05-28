#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

    /* get the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* calculate the start index of the second half */
    int start = length % 2 == 0 ? length / 2 : (length - 1) / 2 + 1;

    /* print the second half of the string */
    for (i = start; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}

