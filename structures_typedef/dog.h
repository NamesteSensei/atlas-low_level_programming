#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure to store information about a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This structure stores a dog's name, age, and owner.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Define dog_t as a new name for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */

