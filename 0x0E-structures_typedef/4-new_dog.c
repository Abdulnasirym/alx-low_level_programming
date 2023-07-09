#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies src to dest
 * @dest: destination
 * @src: src
 * Return: pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 * Return: new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int namelen = 0;
	int ownerlen = 0;
	int i;

	for (i = 0; name[i] != '\0'; i++)
		namelen++;
	for (i = 0; owner[i] != '\0'; i++)
		ownerlen++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc(sizeof(char) * (namelen + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->name = _strcpy(newdog->name, name);
	newdog->owner = _strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
