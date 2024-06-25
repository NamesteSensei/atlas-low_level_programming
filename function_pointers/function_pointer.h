#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>  // Include necessary headers if required

/**
 * print_name_as_is - Prints a name as-is.
 * @name: Pointer to a string containing the name to print.
 *
 * Description:
 * This function prints the given name as-is.
 */
void print_name_as_is(char *name);

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: Pointer to a string containing the name to print.
 *
 * Description:
 * This function converts each character of the name to uppercase and prints it.
 */
void print_name_uppercase(char *name);

/**
 * print_name - Prints a name using a specified printing function.
 * @name: Pointer to a string containing the name to print.
 * @f: Pointer to a function that takes a char * as parameter and returns void.
 *
 * Description:
 * This function takes a name and a function pointer @f. It calls
 * the function pointed to by @f with @name as argument, thereby printing the name.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */

