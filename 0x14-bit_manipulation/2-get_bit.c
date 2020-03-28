#include "holberton.h"

/**
 * get_bit - function
 * @n: number
 * @index: number of bit
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	return (((n >> index) & 1));
}
