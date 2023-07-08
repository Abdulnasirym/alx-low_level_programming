#include "main.h"

/**
 * array_range - creates array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new memory
 */

int *array_range(int min, int max)
{
	int i;
	int size = 0;
	int *output;

	if (min > max)
		return (NULL);
	size = ((max - min) + 1);
	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		output[i] = min + i;
	output[size] = max;
	return (output);
}
