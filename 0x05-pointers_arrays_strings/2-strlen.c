#include "holberton.h"

/**
 *
 *
 *
 */
int _strlen(char *s)
{
	int x;

	for(x = 0; x < 256; x++)
	{
		if(s[x] == '\0')
			break;
	}
	return (x);
}
