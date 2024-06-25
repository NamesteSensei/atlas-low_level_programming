#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string using malloc
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string or NULL if malloc fails
 */
char *_strdup(char *str)
{
    char *dup;
    size_t len = strlen(str) + 1;

    dup = malloc(len);
    if (dup == NULL)
        return NULL;

    return strcpy(dup, str);
}

/**
 * new_dog - Creates a new dog_t structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the newly created dog_t structure
 *         or NULL if malloc fails or any input parameter is NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    /* Allocate memory for new dog_t structure */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    /* Duplicate and store name */
    new_dog->name = _strdup(name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return NULL;
    }

    /* Duplicate and store owner */
    new_dog->owner = _strdup(owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }

    /* Assign values to the new dog_t structure */
    new_dog->age = age;

    return new_dog;
}
