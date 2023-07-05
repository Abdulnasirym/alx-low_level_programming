#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positie numbers
 * @argc: argumnets count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
