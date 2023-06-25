#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned long long int limit = 98;
	unsigned long long int term1 = 1;
	unsigned long long int term2 = 2;
	unsigned long long int count = 2;
	unsigned long long int next;

	printf("%llu, %llu", term1, term2);
	while (count <= limit)
	{
		next = term1 + term2;
		printf(", %llu", next);
		term1 = term2;
		term2 = next;
		count++;
	}
	printf("\n");
	return (0);
}
