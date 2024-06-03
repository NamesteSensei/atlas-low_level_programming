#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *s)
{
    int i = 0;
    int new_word = 1;
    char separators[] = " \t\n,;.!?\"(){}";

    while (s[i] != '\0')
    {
        // Check if the character is a separator
        for (int j = 0; separators[j] != '\0'; j++)
        {
            if (s[i] == separators[j])
            {
                new_word = 1;
                break;
            }
        }

        // If it's a new word and the character is a lowercase letter, capitalize it
        if (new_word && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
            new_word = 0;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            new_word = 0;
        }

        i++;
    }

    return s;
}

