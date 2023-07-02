#include "main.h"

/**
 * _strstr - function that locate substring
 * @haystack: string to search from
 * @needle: string to search for its first occurence
 * Return: pointer to the begining of the located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;

	while (*h != '\0')
	{
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			n++;
			h++;
		}
		if (*n == '\0')
			return (h);
		h++;
	}
	return (NULL);
}
