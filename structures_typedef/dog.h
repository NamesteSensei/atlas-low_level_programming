#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog.
 * @name: A pointer to a character string representing the dog's name.
 * @age: A float representing the dog's age.
 * @owner: A pointer to a character string representing the dog's owner.
 *
 * Description: This structure stores information about a dog, including
 *              its name, age, and owner's name.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

#endif /* DOG_H */

