#include "holberton.h"
/**
 * _puts - print a string
 * @str: pointer
 */
void _puts(char *str)
{
	int x;
	int y;

	for (x = 0; x < 256; x++)
	{
		if (str[x] == '\0')
		{
			for (y = 0; y <= x; y++)
			{
				_putchar(str[y]);
			}
			_putchar('\n');
			break;
		}
	}
}
