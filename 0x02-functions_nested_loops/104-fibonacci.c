#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long int limit = 98;
	unsigned long int term1 = 1;
	unsigned long int term2 = 2;
	unsigned long int count = 2;
	unsigned long int next;

	printf("%lu, %lu", term1, term2);
	while (count <= limit)
	{
		next = term1 + term2;
		printf(", %lu", next);
		term1 = term2;
		term2 = next;
		count++;
	}
	printf("\n");
	return (0);
}
