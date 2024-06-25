#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>  /* Include necessary headers if required */

/* Function prototype for print_name_as_is */
void print_name_as_is(char *name);

/* Function prototype for print_name_uppercase */
void print_name_uppercase(char *name);

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */

