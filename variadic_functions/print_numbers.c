#include <stdarg.h>  /* Include for variadic functions */
#include <stdio.h>   /* Include for printf */
#include "variadic_functions.h"  /* Your custom header, if needed */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    int num;

    va_start(args, n);

    for (i = 0; i < n; i++) {
        num = va_arg(args, int);
        printf("%d", num);

        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    printf("\n");
    va_end(args);
}

