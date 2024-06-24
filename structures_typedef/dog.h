#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure defining a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure stores information about a dog,
 * including its name, age, and owner.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Function prototype for print_dog */
void print_dog(struct dog *d);

#endif /* DOG_H */

