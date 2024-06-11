#include "main.h"
#include <stdio.h>

int main(void)
{
    char s[] = "Hello, World!";
    char t[] = "Goodbye, World!";
    char u[50];
    char v[] = "World";
    char *w;

    /* Test _putchar */
    _putchar('H');
    _putchar('\n');

    /* Test _islower */
    printf("%d\n", _islower('a')); /* should print 1 */
    printf("%d\n", _islower('A')); /* should print 0 */

    /* Test _isalpha */
    printf("%d\n", _isalpha('a')); /* should print 1 */
    printf("%d\n", _isalpha('1')); /* should print 0 */

    /* Test _abs */
    printf("%d\n", _abs(-5)); /* should print 5 */
    printf("%d\n", _abs(5));  /* should print 5 */

    /* Test _isupper */
    printf("%d\n", _isupper('a')); /* should print 0 */
    printf("%d\n", _isupper('A')); /* should print 1 */

    /* Test _isdigit */
    printf("%d\n", _isdigit('a')); /* should print 0 */
    printf("%d\n", _isdigit('1')); /* should print 1 */

    /* Test _strlen */
    printf("%d\n", _strlen(s)); /* should print 13 */

    /* Test _puts */
    _puts(s); /* should print "Hello, World!" */

    /* Test _strcpy */
    printf("%s\n", _strcpy(u, s)); /* should print "Hello, World!" */

    /* Test _atoi */
    printf("%d\n", _atoi("98")); /* should print 98 */
    printf("%d\n", _atoi("-98")); /* should print -98 */

    /* Test _strcat */
    printf("%s\n", _strcat(s, t)); /* should print "Hello, World!Goodbye, World!" */

    /* Test _strncat */
    printf("%s\n", _strncat(s, t, 5)); /* should print "Hello, World!Goodbye, World!Goodb" */

    /* Test _strncpy */
    printf("%s\n", _strncpy(u, s, 5)); /* should print "Hello" */

    /* Test _strcmp */
    printf("%d\n", _strcmp(s, t)); /* should print a positive number */

    /* Test _memset */
    printf("%s\n", _memset(u, 'a', 5)); /* should print "aaaaa" */

    /* Test _memcpy */
    printf("%s\n", _memcpy(u, s, 5)); /* should print "Hello" */

    /* Test _strchr */
    printf("%s\n", _strchr(s, 'o')); /* should print "o, World!Goodbye, World!Goodb" */

    /* Test _strspn */
    printf("%u\n", _strspn(s, "Helo")); /* should print 5 */

    /* Test _strpbrk */
    printf("%s\n", _strpbrk(s, "xyz")); /* should print "(null)" */

    /* Test _strstr */
    w = _strstr(s, v);
    if (w)
    {
        printf("%s\n", w); /* should print "World!Goodbye, World!Goodb" */
    }
    else
    {
        printf("(null)\n");
    }

    return (0);
}

