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
size_t i;

for (i = 0; i < size; i++)
{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
}

return (-1);
}
