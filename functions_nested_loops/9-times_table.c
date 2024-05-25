#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: This function uses two nested loops to print
 * the 9 times table. Each number is separated by a comma and
 * a space, and each line ends with a newline character.
 */
void times_table(void)
{
    int i, j;

    /* Loop for each row */
    for (i = 0; i <= 9; i++)
    {
        /* Loop for each column */
        for (j = 0; j <= 9; j++)
        {
            /* Print comma and space after the first column */
            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            /* Print extra space for single digit numbers */
            if (i * j < 10 && j != 0)
            {
                _putchar(' ');
            }

            /* Print the number */
            _putchar(i * j / 10 + '0');
            _putchar(i * j % 10 + '0');
        }

        /* Print newline at the end of each row */
        _putchar('\n');
    }
}

