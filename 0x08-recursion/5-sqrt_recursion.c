#include "main.h"

/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: parameter
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - main function
 * @n: number to find square of
 * @i: initial value of i
 * Return: sqaure root
 */

int square(int n, int i)
{
	if (n < 0)
		return (-1);
	else if ((i * i) > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (square(n, i + 1));
}
