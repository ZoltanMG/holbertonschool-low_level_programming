#include "holberton.h"
/**
 * print_triangle - entry point
 * Des: _isupper
 * @size: int variable
 * Return: none
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		c = size - 1;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size ; b++)
			{
				if (c >= b)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			c--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
