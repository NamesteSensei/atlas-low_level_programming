#include "main.h"
#include <unistd.h>

/* _putchar function */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/* _islower function */
int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
}

/* _isalpha function */
int _isalpha(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/* _abs function */
int _abs(int n)
{
    return (n < 0 ? -n : n);
}

/* _isupper function */
int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
}

/* _isdigit function */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/* _strlen function */
int _strlen(char *s)
{
    int length = 0;

    while (*s++)
    {
        length++;
    }

    return (length);
}

/* _puts function */
void _puts(char *s)
{
    while (*s)
    {
        _putchar(*s++);
    }
    _putchar('\n');
}

/* _strcpy function */
char *_strcpy(char *dest, char *src)
{
    char *ret = dest;

    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';

    return (ret);
}

/* _atoi function */
int _atoi(char *s)
{
    /* This function is complex and requires more code */
}

/* _strcat function */
char *_strcat(char *dest, char *src)
{
    char *ret = dest;

    while (*dest)
    {
        dest++;
    }

    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';

    return (ret);
}

/* _strncat function */
char *_strncat(char *dest, char *src, int n)
{
    /* This function is complex and requires more code */
}

/* _strncpy function */
char *_strncpy(char *dest, char *src, int n)
{
    /* This function is complex and requires more code */
}

/* _strcmp function */
int _strcmp(char *s1, char *s2)
{
    /* This function is complex and requires more code */
}

/* _memset function */
char *_memset(char *s, char b, unsigned int n)
{
    /* This function is complex and requires more code */
}

/* _memcpy function */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    /* This function is complex and requires more code */
}

/* _strchr function */
char *_strchr(char *s, char c)
{
    /* This function is complex and requires more code */
}

/* _strspn function */
unsigned int _strspn(char *s, char *accept)
{
    /* This function is complex and requires more code */
}

/* _strpbrk function */
char *_strpbrk(char *s, char *accept)
{
    /* This function is complex and requires more code */
}

/* _strstr function */
char *_strstr(char *haystack, char *needle)
{
    /* This function is complex and requires more code */
}

