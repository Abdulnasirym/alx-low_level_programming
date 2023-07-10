#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array name
 * @size: size of array
 * @cmp: function pointers
 * Return: index of the first occcurence
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		return (i);
	return (-1);
}
