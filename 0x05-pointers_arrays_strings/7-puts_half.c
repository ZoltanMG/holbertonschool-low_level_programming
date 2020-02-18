#include "holberton.h"

/**
 * puts_half - half print
 * @str: pointer
 */
void puts_half(char *str)
{
	int a;
	int n;
	int b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		b++;
	}

	if ((a % 2) == 1)
		n = (a + 1) / 2;
	else
		n = a / 2;
	for (a = n; a < b; a++)
	{
		_putchar(str[a]);

	}
	_putchar('\n');
}
