#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d->name == NULL)
		d->name = "(nil)";
	else if (d->age == 0)
		d->age = 0;
	else if (d->owner == NULL)
		d->owner = "(nil)";
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}