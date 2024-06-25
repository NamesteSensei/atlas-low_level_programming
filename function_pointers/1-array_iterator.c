#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed on each element of the array.
 *
 * Description:
 * This function iterates over each element of the array and applies the function
 * pointed to by @action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (array == NULL || action == NULL)
        return;

    size_t i;  /* Variable declaration moved to the beginning of the function */
    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}

