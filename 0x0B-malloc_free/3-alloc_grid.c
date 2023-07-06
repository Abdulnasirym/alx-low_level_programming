#include "main.h"

/**
 * alloc_grid - creates a 2 dimensionalarray
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **output;

	if (height <= 0 || width <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
