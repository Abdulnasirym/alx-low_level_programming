#include "function_pointers.h"

/**
 * array_iterator - executes a function on each parametr of an array
 * @array: array name
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
