#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
=======
 * print_numbers - Prints the numbers from 0 to 9.
 *
 * Description: This function uses a loop to print each number from 0 to 9.
 * It uses the _putchar function to print each character. After printing all
 * the numbers, it prints a new line.
>>>>>>> 7503dbdd3657dbcccc52e6a471678cfd66dfd77d
 */
void print_numbers(void)
{
    int i;

<<<<<<< HEAD
    for (i = 0; i < 10; i++)
    {
        _putchar(i + '0');
    }
=======
    /* Loop from 0 to 9 */
    for (i = 0; i < 10; i++)
    {
        /* Print the current number */
        _putchar(i + '0');
    }

    /* Print a new line */
>>>>>>> 7503dbdd3657dbcccc52e6a471678cfd66dfd77d
    _putchar('\n');
}

