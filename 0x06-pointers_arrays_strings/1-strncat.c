#include "main.h"

/**
 * _strncat - concatenates n number of bytes from src to dest
 * @dest: destination string
 * @src: source destination
 * @n: number of bytes to concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *destp = dest;

	while (*destp != '\0')
		destp++;
	for (i = 0 ; i < n  && *src != '\0' ; i++)
	{
		*destp = *src;
		*destp++;
	}
	*dest = '\0';
	return (dest);
}
