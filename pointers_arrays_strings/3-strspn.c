#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int bytes = 0;
    int flag;
    char *start = accept;

    while (*s)
    {
        flag = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                bytes++;
                flag = 1;
            }
            accept++;
        }
        if (flag == 0)
        {
            return (bytes);
        }
        s++;
        accept = start;
    }
    return (bytes);
}

