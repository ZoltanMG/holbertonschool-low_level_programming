#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function
 * @separator: char constant
 * @n: int constant
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ag, int));
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ag);
}
