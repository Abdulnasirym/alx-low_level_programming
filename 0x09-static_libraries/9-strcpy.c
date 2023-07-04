#include "main.h"

/**
 * _strcpy - function that copies string
 * @dest: destination parameter
 * @src: source parameter
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
