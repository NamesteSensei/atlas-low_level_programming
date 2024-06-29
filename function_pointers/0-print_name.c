
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name to be printed
 * @f: pointer to the function that prints the name
 *
 * Description: This function takes a name and a function pointer,
 * and calls the function pointer with the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
    }
}

