#include "main.h"

/**
 * binary_to_uint - convert binsry to unisgned integer
 * @b: binary string to convert
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i, decimal = 1;

	if (b == NULL)
		return (0);
	i = strlen(b) - 1;

	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += decimal;
		decimal = decimal * 2;
	}
	return (total);
}
