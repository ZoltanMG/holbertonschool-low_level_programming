#include "holberton.h"

/**
 * print_binary - function
 * @n: unsigned int
 */
void print_binary(unsigned long int n)
{
	unsigned int pot_1 = 1, pot_2, dup = n;
	int count_1 = 0, count_2 = 1;

	if (n == 0)
		putchar(n + '0');
	else if (n == 1)
		putchar(n + '0');
	else
	{
		while (pot_1 <= dup)
		{
			if (pot_1 <= dup)
				pot_2 = pot_1;
			pot_1 += pot_1;
			count_1++;
		}
		dup -= pot_2;
		putchar('1');
		while (pot_2 > 1)
		{
			pot_1 = 1;
			count_1--;
			count_2 = 1;
			while (count_2 < count_1)
			{
				pot_1 += pot_1;
				count_2++;
			}
			if (pot_1 <= dup)
			{
				putchar('1');
				dup -= pot_1;
			}
			else
				putchar('0');
			pot_2 = pot_1;
		}
	}
}
