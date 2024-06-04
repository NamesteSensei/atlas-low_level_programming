#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for the substring
 * @needle: substring to find in haystack
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    int i;

    if (*needle == 0)
        return (haystack);

    while (*haystack)
    {
        i = 0;

        if (haystack[i] == needle[i])
        {
            do {
                if (needle[i + 1] == '\0')
                    return (haystack);
                i++;
            } while (haystack[i] == needle[i]);
        }

        haystack++;
    }
    return ('\0');
}

