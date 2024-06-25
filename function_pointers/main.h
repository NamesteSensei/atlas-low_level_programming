#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name_as_is */
void print_name_as_is(char *name);

/* Function prototype for print_name_uppercase */
void print_name_uppercase(char *name);

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */

