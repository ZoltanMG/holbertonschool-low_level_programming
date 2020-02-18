#include "holberton.h"
#include <unistd.h>

/**
 * rev_string - print a string in rev
 * @s: pointer
 */
void rev_string(char *s)
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
