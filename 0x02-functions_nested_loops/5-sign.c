#include "main.h"

/**
 * print_sign - function to print sign
 * @n: function parameter
 * Return: 0, -1 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("%d", 0);
		return (0);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}

	return (0);
}
