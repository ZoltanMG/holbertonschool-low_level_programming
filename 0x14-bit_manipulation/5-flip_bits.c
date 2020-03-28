#include "holberton.h"
/**
 * flip_bits - return flips need to get from a number to anotherfunction
 * @n: number
 * @m: number
 * Return: num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, num = 0;

	while (a > 0)
	{
		num += (a & 1);
		a = a >> 1;
	}
	return (num);
}
