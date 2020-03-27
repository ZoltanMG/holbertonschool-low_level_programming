#include "holberton.h"

/**
 * binary_to_uint - function
 * @b: string whit '0' or '1'
 *
 * Return: number in base 10
 */
unsigned int binary_to_uint(const char *b)
{
	int a = 0;
	int pot = 1;
	int num_d = 0;

	if (b == NULL)
		return (0);
	while (b[a])
	{
		if (b[a] != '1' && b[a] != '0')
			return (0);
		a++;
	}

	if (a !=  1)
		a--;
	else
		return (1);
	while (a >= 0)
	{
		if (b[a] != '0')
			num_d += pot;
		a--;
		pot += pot;
	}
	return (num_d);
}
