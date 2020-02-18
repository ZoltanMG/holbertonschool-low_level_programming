#include "holberton.h"
/**
 * _puts - prints a string.
 * @str : pointer-parameter
 * Return: ntg.
 */
void _puts(char *str)
{
	int x;

	for (x = 0; x < 500; x++)
	{
		if (str[x] == '\0')
			break;
		_putchar(str[x]);
	}
	_putchar('\n');
}
