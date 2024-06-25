#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer that defines how to print the name
 *
 * Description: This function takes in a name and a function pointer @f.
 * Depending on the function pointed to by @f, it prints the name in a
 * specified format.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

