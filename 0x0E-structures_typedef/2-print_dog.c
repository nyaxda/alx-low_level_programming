#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * Description: a function that prints a struct dog.
 * If an element of d is NULL, print (nil) instead of this element.
 * If d is NULL print nothing.
 *
 *
 * @d: pointer to struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}