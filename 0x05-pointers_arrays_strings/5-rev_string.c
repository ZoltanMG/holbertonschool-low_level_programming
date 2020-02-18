#include "holberton.h"

/**
 * rev_string - print a string in rev
 * @s: pointer
 */
void rev_string(char *s)
{
	int a;
	int b = 0;
	int c[500];

	for (a = 0; a < 500; a++)
	{
		if (s[a] == '\0')
		{
			break;
		}
	}
	for (a = (a - 1); a >= 0; a--)
	{
		c[b] = s[a];
		b++;
	}

	for (a = 0; a < b; a++)
	{
		s[a] = c[a];
	}
}
