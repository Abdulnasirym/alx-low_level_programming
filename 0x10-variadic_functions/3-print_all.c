#include "variadic_functions.h"

/**
 * print_all - ...
 * @format: ...
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *x;

	va_start(arg, format);
	while (format[i] != '\0')
	{
		switch(format[i++])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				x = va_arg(arg, char *);
				printf("%s\n", x != NULL ? x : "(nil)");
				break;
			default:
				continue;

		}
		if (format[i])
			printf(", ");
	}
	va_end(arg);
}
