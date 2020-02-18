#include "holberton.h"

/**
 * puts_half - half print
 * @str: pointer
 */
void puts_half(char *str)
{
	int a;
	int n;
	int b;

	for (a = 0; str[a] != '\0'; a++)

	if ((a % 2) == 1)
		n = (a - 1) / 2;
	else
		n = a / 2;
	for (b = n; b < a; b++)
	{
		_putchar(str[b]);

	}
	_putchar('\n');
}
