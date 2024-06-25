#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified printing function.
 * @name: Pointer to a string containing the name to print.
 * @f: Pointer to a function that takes a char * as parameter and returns void.
 *
 * Description:
 * This function takes a name and a function pointer @f. It calls
 * the function pointed to by @f with @name as argument, thereby printing the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}

