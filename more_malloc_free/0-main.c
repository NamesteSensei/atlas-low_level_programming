#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - chck the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    // Declare pointers for different data types
    char *c;
    int *i;
    float *f;
    double *d;

    // Allocate memory and print the memory address
    c = malloc_checked(sizeof(char) * 1024);
    printf("Address of char array: %p\n", (void *)c);

    i = malloc_checked(sizeof(int) * 402);
    printf("Address of int array: %p\n", (void *)i);

    f = malloc_checked(sizeof(float) * 100000000);
    printf("Address of float array: %p\n", (void *)f);

    d = malloc_checked(INT_MAX);
    printf("Address of double array: %p\n", (void *)d);

    // Free the allocated memory
    free(c);
    free(i);
    free(f);
    free(d);

    return (0);
}
