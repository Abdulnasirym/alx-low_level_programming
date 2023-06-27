#include "main.h"

/**
 * print_line - function that prints straight line
 * @n: function parameter
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
