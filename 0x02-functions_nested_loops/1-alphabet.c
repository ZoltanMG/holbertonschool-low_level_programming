#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet - writes the character c to stdout
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; ++a)
		_putchar(a);
	_putchar('\n');
}
