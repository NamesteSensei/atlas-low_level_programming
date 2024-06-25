#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to dog structure to free
 *
 * Description: This function frees the memory allocated for the members
 *              of the dog structure and then frees the structure itself.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        free(d->name);
        free(d->owner);
        free(d);
    }
}

