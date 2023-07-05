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
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] != '\0' ; j++)
			{
				if (!(atoi(argv[i])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}

		printf("%d\n", sum);
	}

	return (0);
}
