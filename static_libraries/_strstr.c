#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    char *a, *b;

    while (*haystack)
    {
        a = haystack;
        b = needle;

        while (*haystack && *b && *haystack == *b)
        {
            haystack++;
            b++;
        }

        if (!*b)
            return a;

        haystack = a + 1;
    }
    return 0;
}

