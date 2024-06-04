#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to change
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *s)
{
    int i = 0;
    int j;

    /* Capitalize the first character if it is a letter */
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        s[i] = s[i] - 'a' + 'A';
    }

    /* Go through the string, looking for word separators */
    for (i = 1; s[i] != '\0'; i++)
    {
        /* Check if the character is a separator */
        for (j = 0; separators[j] != '\0'; j++)
        {
            if (s[i - 1] == separators[j])
            {
                /* If the next character is a lowercase letter, capitalize it */
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] = s[i] - 'a' + 'A';
                }
            }
        }
    }

    return (s);
}

