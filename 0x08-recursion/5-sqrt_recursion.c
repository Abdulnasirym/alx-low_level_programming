#include "main.h"

/**
 * _sqrt_recursion - finds natural square root of a number
 * @n: parameter
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	int start = 1;
	int end = n;
	int result;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);
		if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
			end = mid - 1;
	}

	return (result);
}
