#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destrination string
 * @src: source string
 * @n: number of bytes to copy to dest
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
