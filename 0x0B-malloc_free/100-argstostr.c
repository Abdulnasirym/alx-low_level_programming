#include "main.h"

/**
 * argstostr - concatenates string
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *out;

	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	out = malloc(sizeof(char) * (len + 1));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			out[k] = av[i][j];
			k++;
		}
		out[k++] = '\n';
	}
	out[k] = '\0';
	return (out);
}
