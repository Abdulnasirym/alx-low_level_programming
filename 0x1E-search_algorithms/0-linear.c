#include "search_algos.h"

/**
* linear_search - Function that uses linear search to search
* @array: pointer to first element of array
* @size: size of the array
* @value: value to search in the array
* Return: index of the searched value or -1 if value is not found
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
