#include "holberton.h"

/**
 * aux - func
 * @x: int
 * @z: int
 * Return: int
 */
int aux(int z, int x)
{
	if ((x * x) == z)
		return (x);
	else if ((x * x) > z)
		return (-1);
	return (aux(z, x + 1));
}

/**
 * _sqrt_recursion - function main
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (aux(n, 1));
}
