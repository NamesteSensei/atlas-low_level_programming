#include "variadic_functions.h"
#include <stdio.h> /* Include stdio.h for printf */
#include <stdarg.h> /* Include stdarg.h for variadic functions */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;

    /* Initialize the va_list variable */
    va_start(args, n);

    /* Loop through each argument */
    for (i = 0; i < n; i++)
    {
        /* Print the argument */
        printf("%d", va_arg(args, int));

        /* Print the separator if it's not the last element */
        if (separator != NULL && i < n - 1)
        {
            printf("%s", separator);
        }
    }

    /* Clean up the va_list variable */
    va_end(args);

    /* Print a new line */
    printf("\n");
}

/* Main function for testing the print_numbers function */
int main(void)
{
    print_numbers(", ", 4, 1, 2, 3, 4);
    return 0;
}

