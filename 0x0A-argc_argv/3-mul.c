#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	return (0);

}
