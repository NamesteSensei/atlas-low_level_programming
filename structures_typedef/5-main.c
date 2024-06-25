#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    /* Create a new dog */
    my_dog = new_dog("Poppy", 3.5, "Bob");
    if (my_dog == NULL)
    {
        printf("Failed to create dog.\n");
        return (1);
    }

    /* Display dog's information */
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

    /* Free memory allocated for dog */
    free_dog(my_dog);

    return (0);
}

