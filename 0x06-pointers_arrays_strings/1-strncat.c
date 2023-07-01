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
	int i = 0;

	while (i < n && *src != '\0')
	{
		dest[index + i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
