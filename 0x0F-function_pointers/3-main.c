#include "3-calc.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int a, b, (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	fptr = get_op_func(argv[2]);

	if (!fptr)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", fptr(a, b));

	return (0);
}
