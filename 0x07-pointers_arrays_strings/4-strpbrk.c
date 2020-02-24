#include "holberton.h"

/**
 * _strpbrk - function
 * @s: char pointer
 * @accept: char point
 * Return: b
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int c;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
				return (s + a);
		}
	}
	return (0);
}
