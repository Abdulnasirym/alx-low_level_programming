#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @j: function parameter
 * Return: 0
 */

int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (j < 0)
		k = -k;
	_putchar(k + '0');

	return (k);
}
