#include "main.h"

/**
 * print_to_98 - function to print numbers to 98
 * @n: function parameter
 * Return: 0
 */

void print_to_98(int n)
{
	if (n > 0)
	{
		int i;

		for (i = n ; i <= 98 ; i++)
		{
			printf("%d\n", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n == 98)
	{
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		int i;

		for (i = n ; i >= 98 ; i++)
		{
			printf("%d\n", i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n < 10)
	{
		int i;

		for (i = n ; i <= 98 ; i++)
		{
			printf("%d\n", i);
			if (i != 98)
				printf(", ");
		}

	}
}

