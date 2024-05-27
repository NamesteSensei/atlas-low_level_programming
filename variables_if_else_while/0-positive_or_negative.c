#include <stdio.h>
#include <stdlib.h>

/**
 * main - Generates a random number and determines its sign.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Generate a random number */
    n = rand();

    /* Print the random number */
    printf("%d\n", n);

    /* Determine and print the sign of the number */
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("0 is zero\n");
    }

    return 0;
}

