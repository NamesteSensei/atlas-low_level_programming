#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - allocates memory using malloc
* @b: the amount of memory to allocate
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}

