#include "holberton.h"

/**
 * print_alphabet_x10 - writes the character c to stdout
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b <= 10; ++b)
	{
		for (a = 'a'; a <= 'z'; ++a)
			_putchar(a);
		_putchar('\n');
	}
}
