#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using a given function
 * @name: name to be printed
 * @f: pointer to the function that prints the name
 *
 * Description: This function takes a name and a function pointer,
 * and calls the function pointer with the name.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */

