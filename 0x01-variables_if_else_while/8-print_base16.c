#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = '0';
	int M = 'a';
	while (m <= '9')
	{
		putchar(m);
		m++;
	}
	while (M <= 'f')
	{
		putchar(M);
		M++;
	}
	putchar('\n');
	return (0);
}
