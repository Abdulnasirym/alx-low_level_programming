#include "main.h"

void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		printf("\n");
	else
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				result = i * j;
				if (j == 0)
					printf("%d, ", result);
				else
				{
					printf("%3d", result);
					if (j != n)
						printf(", ");
				}
			}
			printf("\n");
		}	
	}
}
