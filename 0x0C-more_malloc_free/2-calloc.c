#include "main.h"

/**
 * _calloc - allocates memory using malloc
 * @nmemb: number of memebers
 * @size: size of array
 * Return: pointer to new memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
