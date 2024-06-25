#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h> 

/* Function prototype for print_name_as_is */
void print_name_as_is(char *name);

/* Function prototype for print_name_uppercase */
void print_name_uppercase(char *name);

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

/* Function prototype for array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCTION_POINTERS_H */

