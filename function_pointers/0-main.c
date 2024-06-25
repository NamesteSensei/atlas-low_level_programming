#include <stdio.h>
#include "function_pointers.h"

/* Function prototypes for print_name_as_is and print_name_uppercase...*/

int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}

