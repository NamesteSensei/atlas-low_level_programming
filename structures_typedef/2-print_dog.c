#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog to be printed
 *
 * Description: Prints the details of a dog including its name,
 * age, and owner. If any element is NULL, prints (nil) instead.
 * If the struct dog pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;

    /* Print the dog's name */
    if (d->name == NULL)
        printf("Name: (nil)\n");
    else
        printf("Name: %s\n", d->name);

    /* Print the dog's age */
    printf("Age: %f\n", d->age);

    /* Print the dog's owner */
    if (d->owner == NULL)
        printf("Owner: (nil)\n");
    else
        printf("Owner: %s\n", d->owner);
}

