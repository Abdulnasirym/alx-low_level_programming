#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area to fill
 * @b: bytes to fill the memory with
 * @n: number of bytes to fill in the memory
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
