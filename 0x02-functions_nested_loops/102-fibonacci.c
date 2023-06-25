#include <stdio.h>

/**
 * main - function that prints first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int next, first = 1, second = 2;

	printf("%lu, ", first);
	for (i = 1 ; i < 50 ; i++)
	{
		printf("%lu", second);
		next = first + second;
		first = second;
		second = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
