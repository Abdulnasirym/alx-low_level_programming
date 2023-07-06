#include "main.h"

/**
 * _strdup - function that returnss pointer to newly allocated string
 * @str: string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	if (str == NULL)
		return (NULL);

	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= count ; i++)
		copy[i] = str[i];

	return (copy);
}
