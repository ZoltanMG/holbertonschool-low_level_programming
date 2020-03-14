#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * c_f - func
 * @lis: va_list
 */
void c_f(va_list lis)
{
	printf("%c", va_arg(lis, int));
}

/**
 * i_f - func
 * @lis: va_list
 */
void i_f(va_list lis)
{
	printf("%d", va_arg(lis, int));
}

/**
 * f_f - func
 * @lis:  va_list
 */
void f_f(va_list lis)
{
	printf("%f", va_arg(lis, double));
}

/**
 * s_f - func
 * @lis: va_list
 */
void s_f(va_list lis)
{
	if (!lis)
		printf("(nil)");
	printf("%s", va_arg(lis, char *));
}

/**
 * print_all - func
 * @format: const
 */
void print_all(const char * const format, ...)
{
	form arr[] = {
		{"c", c_f},
		{"i", i_f},
		{"f", f_f},
		{"s", s_f},
		{NULL, NULL}
	};
	int i = 0;
	int j = 0;
	char *sep = "";
	va_list ag;

	va_start(ag, format);
	while (format[j])
	{
		while (i < 4)
		{
			if (format[j] == arr[i].fmt[0])
			{
				printf("%s", sep);
				arr[i].f(ag);
				sep = ", ";
			}
			i++;
		}
		j++;
		i = 0;
	}
	printf("\n");
}
