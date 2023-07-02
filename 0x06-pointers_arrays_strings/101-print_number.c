#include "main.h"

/**
 * print_number - prints numbers
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;
	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
