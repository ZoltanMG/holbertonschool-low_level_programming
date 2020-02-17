#include "holberton.h"
/**
 * print_rev - print a string in rev
 * @s: pointer
 */
void print_rev(char *s)
{
	int x;
	int y;

	for (x = 0; x < 256; x++)
	{
		if (s[x] == '\0')
		{
			for (y = x; y >= 0; y--)
			{
				_putchar(s[y]);
			}
			_putchar('\n');
			break;
		}
	}
}
