#include "main.h"

/**
 * _puts - prints string
 * @str:string to be printed
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		_putchar(s[i]);
	_putchar('\n');
}
