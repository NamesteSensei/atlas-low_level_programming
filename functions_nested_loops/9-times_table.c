#include "main.h"

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

            /* Print the number */
            if (i * j < 10)
            {
                if (j != 0)
                {
                    _putchar(' ');
                }
                _putchar(i * j + '0');
            }
            else
            {
                _putchar(i * j / 10 + '0');
                _putchar(i * j % 10 + '0');
            }
        }

        /* Print newline at the end of each row */
        _putchar('\n');
    }
}

