#include "dog.h"
#include <stdio.h> 

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name to set in struct dog
 * @age: age to set in struct dog
 * @owner: owner to set in struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL) 
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

