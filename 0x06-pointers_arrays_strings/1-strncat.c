#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n number of bytes from src to dest
 * @dest: destination string
 * @src: source destination
 * @n: number of bytes to concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[index + i] = *src;
		src++;
	}
	dest[index + i] = '\0';
	return (dest);
}
