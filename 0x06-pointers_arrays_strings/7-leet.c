#include "main.h"

/**
 * leet - function that encodes in leet
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		int j;

		for (j = 0 ; j < 10 ; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
