#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numero = '0';
	while (numero <= '9')
	{
		putchar(numero);
		numero++;
		if (numero != '0' && numero <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
