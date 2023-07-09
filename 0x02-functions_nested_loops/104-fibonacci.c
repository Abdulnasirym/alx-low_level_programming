#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	long int limit = 98;
	long int term1 = 1;
	long int term2 = 2;
	long int count = 2;
	long int next;

	printf("%ld, %ld", term1, term2);
	while (count <= limit)
	{
		next = term1 + term2;
		printf(", %ld", next);
		term1 = term2;
		term2 = next;
		count++;
	}
	printf("\n");
	return (0);
}
