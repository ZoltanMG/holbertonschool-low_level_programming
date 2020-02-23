#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letra = 'z';
	while (letra >= 'a')
	{
		putchar(letra);
		letra--;
	}
	putchar('\n');
	return (0);
}
