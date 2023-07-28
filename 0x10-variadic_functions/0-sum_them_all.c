#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - sum given inputs
 * @n: input params
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list lst;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(lst, unsigned int);
	}
	va_end(lst);
	return (sum);
}

