#include "variadic_functions.h"

int main(void)
{
    print_strings(", ", 4, "Hello", "World", NULL, "!");
    print_numbers(", ", 4, 1, 2, 3, 4);
    return (0);
}

