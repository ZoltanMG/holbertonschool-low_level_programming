#include "holberton.h"

/**
 * more_numbers - print many numbers
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar(b + '0');
		}
		_putchat('\n');
	}
}
