#include "main.h"

/**
 * _strlen_recursion - returns teh length of a string
 * @s: string to count
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
