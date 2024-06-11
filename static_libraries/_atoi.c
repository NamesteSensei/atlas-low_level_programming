#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
    int i = 0, num = 0, sign = 1;

    /* handle signs */
    while (s[i])
    {
        if (s[i] == '-')
            sign *= -1;
        else if (s[i] >= '0' && s[i] <= '9')
            break;
        i++;
    }

    /* convert string to integer */
    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return (num * sign);
}

