#include "variadic_functions.h"

/**
 * c_f - func
 *
 * @lis: va_list
 */
void c_f(va_list lis)
{
	printf("%c", va_arg(lis, int));
}
/**
 * i_f - func
 *
 * @lis: va_list
 */
void i_f(va_list lis)
{
	printf("%d", va_arg(lis, int));
}
/**
 * f_f - func
 *
 * @lis:  va_list
 */
void f_f(va_list lis)
{
	printf("%f", va_arg(lis, double));
}
/**
 * s_f - func
 *
 * @lis: va_list
 */
void s_f(va_list lis)
{
	char *a;

	a = va_arg(lis, char *);

	if (!*a)
		a = "(nil)";
	printf("%s", a);
}
/**
 * print_all - func
 *
 * @format: const
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list ag;
	char *sep = "";

	form arr[] = {
		{'c', c_f},
		{'i', i_f},
		{'f', f_f},
		{'s', s_f}
	};

	va_start(ag, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == arr[j].fmt)
			{
				printf("%s", sep);
				arr[j].f(ag);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ag);
}
