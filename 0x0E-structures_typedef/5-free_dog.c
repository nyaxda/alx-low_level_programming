#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 *
 * Description: a function that frees dogs.
 *
 * @d: pointer to struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
