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
	int i, length1, length2;

	length1 = 0;
	while (name[length1] != '\0') {
		length1++;
	}
	length2 = 0;
	while (owner[length2] != '\0') {
		length2++;
	}
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
	for (i = 0; i < length1; i++)
	{
		new->name[i] = name[i];
	}
	new->name[i] = '\0';
	new->age = age;
	new->owner = (char *)malloc(sizeof(char) * (length2 + 1));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	for (i = 0; i < length2; i++)
	{
		new->owner[i] = owner[i];
	}
	new->owner[i] = '\0';
	return (new);
}
