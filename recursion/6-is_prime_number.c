#include "main.h"

/* Forward declaration of is_prime_helper */
int is_prime_helper(int n, int i);

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 * Return: 1 if the number is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }
    else
    {
        return (is_prime_helper(n, 2));
    }
}

/**
 * is_prime_helper - helper function to check if a number is a prime number
 * @n: the number to check
 * @i: the current divisor to check
 * Return: 1 if the number is a prime number, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
    if (i * i > n)
    {
        return (1);
    }
    else if (n % i == 0)
    {
        return (0);
    }
    else
    {
        return (is_prime_helper(n, i + 1));
    }
}

