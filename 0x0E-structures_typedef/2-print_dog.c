#include "main.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("");
	else if (d->name == NULL)
		printf("nil\n");
	else if (d->age == NULL)
		printf("nil\n");
	else if (d->owner == NULL)
		printf("nil\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner);	
	}
}
