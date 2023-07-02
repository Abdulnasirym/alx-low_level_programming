#include "main.h"

/**
 * _strspn - get the length of a prefix sub string
 * @s: string to search from
 * @accept: bytes to search for
 * Return: length of the prefix sub string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
