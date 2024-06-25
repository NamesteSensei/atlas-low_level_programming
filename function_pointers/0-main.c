#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - Prints a name as is.
 * @name: Name of the person.
 *
 * Description:
 * This function prints the given name as is.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase.
 * @name: Name of the person.
 *
 * Description:
 * This function prints the given name in uppercase.
 */
void print_name_uppercase(char *name)
{
    unsigned int i = 0;

    printf("Hello, my uppercase name is ");
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
    putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Description:
 * This function demonstrates the usage of the print_name function with
 * different printing functions (print_name_as_is and print_name_uppercase).
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    
    return (0);
}

