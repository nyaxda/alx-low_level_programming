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
	if d == NULL
	{
		printf("\n");
	}
	else
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %s\n", d->age ? d->age : "(nil)");
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
