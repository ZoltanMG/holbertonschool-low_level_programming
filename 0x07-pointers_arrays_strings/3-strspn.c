#include "holberton.h"

/**
 * _strspn - function
 * @s: char pointer
 * @accept: char point
 * Return: b
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int c;
	unsigned int b = 0;

	for (a = 0; a < 5; a++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
				b++;
		}
	}
	return (b);
}
