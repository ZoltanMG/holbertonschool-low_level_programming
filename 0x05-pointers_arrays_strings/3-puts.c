#include "holberton.h"
/**
 * _puts - print a string
 * @str: pointer
 */
void _puts(char *str)
{
	int z;

	for (z = 0; z < 500; z++)
	{
		if (str[z] == '\0')
		{
			break;
		}
		_putchar(str[z]);
	}
	_putchar('\n');
}
