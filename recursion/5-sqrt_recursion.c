#include "main.h"

/* Forward declaration of sqrt_helper */
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}

/**
 * sqrt_helper - helper function to find the square root
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 * Return: the natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_helper(n, i + 1));
	}
}

