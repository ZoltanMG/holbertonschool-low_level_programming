#include "holberton.h"
/**
 * set_bit - function
 * @n: number
 * @index: position of bit
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	*n ^= 1 << index;

	return (1);
}
