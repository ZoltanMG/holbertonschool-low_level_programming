#include "holberton.h"

/**
 * puts2 - puts 2
 * @str: pointer
 */
void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; a < 500; a++)
	{
		if (str[a] == '\0')
			break;
	}
	for (b = 0; b < a; b += 2)
	{
		if (str[b] == '\0')
			break;
		_putchar(str[b]);
	}
	_putchar('\n');
}
