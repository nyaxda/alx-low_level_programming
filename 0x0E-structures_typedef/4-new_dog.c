#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * Description: a function that creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int length1, length2;

	length1 = strlen(name);
	length2 = strlen(owner);

	new = (dog_t *)malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->name = (char *)malloc(sizeof(char) * (length1 + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	strcpy(new->name, name);

	new->age = age;

	new->owner = (char *)malloc(sizeof(char) * (length2 + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	strcpy(new->owner, owner);

	return new;
}
