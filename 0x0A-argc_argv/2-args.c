#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: arguents count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
		prinf("%s\n", argv[i]);
	return (0);
}
