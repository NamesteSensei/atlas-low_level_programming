#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n, or -1 if n is less than 0
 */
int factorial(int n)
{
    if (n < 0)
    {
        return (-1); /* Error for negative numbers */
    }
    else if (n == 0)
    {
        return (1); /* Base case: 0! = 1 */
    }
    else
    {
        return (n * factorial(n - 1)); /* Recursive case */
    }
}

