#include "search_algos.h"

/**
* binary_search - Function that uses binary search
* @array: Array to be searched
* @size: Size of the array
* @value: Value to serach in the array
* Return: -1 or index of the found value
*/

int binary_search(int *array, size_t size, int value)
{
	int mid, i;
	int l = 0;
	int r = ((int)size - 1);

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");

		mid = l + (r - l) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
