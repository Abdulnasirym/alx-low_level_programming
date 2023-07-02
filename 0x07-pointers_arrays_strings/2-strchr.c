#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string to search from
 * @c: charcater to search
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
