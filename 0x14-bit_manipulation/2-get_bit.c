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
	return (((n >> index) & 1));
}
