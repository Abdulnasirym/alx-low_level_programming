#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: the base number
 * @y: the power
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
