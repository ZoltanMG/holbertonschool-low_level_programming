#include "holberton.h"

/**
 * _strlen - count of char.
 * @s: char.
 * Return: return is x.
 */
int _strlen(char *s)
{
	int x;
	int y = 0;

	for (x = 0; x < 256; x++)
	{
		if (s[x] == '\0')
			break;
		y++;
	}
	return (y);
}
