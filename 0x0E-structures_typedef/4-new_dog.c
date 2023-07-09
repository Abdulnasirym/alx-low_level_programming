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
	int namelen;
	int ownerlen;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

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
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}

/**
 * _strlen - length of a string
 * @s: string toevaluate
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
