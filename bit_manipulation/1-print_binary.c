#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
    int bit = sizeof(n) * 8 - 1;
    int started = 0;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (bit >= 0)
    {
        if ((n >> bit) & 1)
        {
            _putchar('1');
            started = 1;
        }
        else if (started)
        {
            _putchar('0');
        }
        bit--;
    }
}

