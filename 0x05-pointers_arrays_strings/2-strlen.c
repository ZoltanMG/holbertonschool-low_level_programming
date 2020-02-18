#include "holberton.h"

/**
 * _strlen - count of char.
 * @s: char.
 * Return: return is x.
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; x < 500; x++)
	{
		if (s[x] == '\0')
			break;
	}
	return (x);
}
