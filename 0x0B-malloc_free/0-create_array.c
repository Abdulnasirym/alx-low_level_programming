#include "main.h"

/**
 * create_array - creates array of character
 * @size: array size
 * @c: characters
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	else if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = c;
	return (arr);
}
