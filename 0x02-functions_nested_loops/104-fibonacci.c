#include <stdio.h>

/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	unsigned int limit = 98;
	unsigned int term1 = 1;
	unsigned int term2 = 2;
	unsigned int count = 2;
	unsigned int next;
	printf("%u, %u", term1, term2);
	while (count <= limit)
	{
		next = term1 + term2;
		printf(", %u", next);
		term1 = term2;
		term2 = next;
		count++;
	}
	printf("\n");
	return (0);
}
