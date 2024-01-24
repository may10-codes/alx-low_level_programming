#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - Free
  * @d: Argument
  *
  */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    char *copy_name;
    char *copy_owner;

    dog = malloc(sizeof(dog_t));

    if (dog == NULL)
        return (NULL);

    copy_name = malloc(sizeof(char) * (strlen(name) + 1));

    if (copy_name == NULL)
    {
        free(dog);
        return (NULL);
    }

    copy_owner = malloc(sizeof(char) * (strlen(owner) + 1));

    if (copy_owner == NULL)
    {
        free(copy_name);
        free(dog);
        return (NULL);
    }

    strcpy(copy_name, name);
    strcpy(copy_owner, owner);

    dog->name = copy_name;
    dog->age = age;
    dog->owner = copy_owner;

    return (dog);
}

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

