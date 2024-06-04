#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array.
 * @a: the array to be reversed.
 * @n: the number of elements in the array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	/* Swap the elements of the array from the ends towards the center */
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

