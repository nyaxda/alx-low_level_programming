#include <stdio.h>
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
	int i, length1, length2;
	char *name2, *owner2;

	length1 = strlen(name);
	length2 = strlen(owner);

	new = (dog_t *)malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}
	name2 = (char *)malloc(sizeof(char) * (length1 + 1));
	if (name2 == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		name2[i] = name[i];
	}
	name2[i] = '\0';


	new->name = name2;
	new->age = age;

	owner2 = (char *)malloc(sizeof(char) * (length2 + 1));
	if (owner2 == NULL)
	{
		free(name2);
		free(new);
		return (NULL);
	}

	for (i = 0; i < length2; i++)
	{
		owner2[i] = owner[i];
	}
	owner2[i] = '\0';
 	new->owner = owner;

	return (new);
}
