#include "holberton.h"
/**
 * clear_bit - clean bitfunction
 * @n: pointer
 * @index: bit
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > ((sizeof(unsigned long int) * 8) + 1))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
