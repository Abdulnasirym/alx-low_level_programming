#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen = 0;
	int ownerlen = 0;
	dog_t *newdog;
	int i;

	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownerlen++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(char) * namelen + 1);
	if (newdog->name == NULL)
		return (NULL);
	newdog->owner = malloc(sizeof(char) * ownerlen + 1);
	if (newdog->owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		newdog->name[i] = name[i];
	for (i = 0; owner[i] != '\0'; i++)
		newdog->owner[i] = owner[i];
	newdog->age = age;
	return (newdog);
}
