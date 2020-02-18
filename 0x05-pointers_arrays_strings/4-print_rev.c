#include "holberton.h"
/**
 * print_rev - print a string in rev
 * @s: pointer
 */
void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; x < 500; x++)
	{
		if (s[x] == '\0')
		{
			break;
		}
	}
	for (y = (x - 1); y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
