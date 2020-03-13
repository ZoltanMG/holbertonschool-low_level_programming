#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function
 * @separator: char constant
 * @n: int constant
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	char *str;

	va_start(ag, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ag, char *);
		if (!*str)
			printf("(nill)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ag);
}
