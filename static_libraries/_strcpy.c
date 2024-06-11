#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the 
 *           terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the destination string dest
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;
}

