#include "holberton.h"

/**
 *times_table -prints time table
 *
 *Return: always 0
 */
void times_table(void)
{
	int a;
	int b;
	int r;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			r = a * b;
			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
