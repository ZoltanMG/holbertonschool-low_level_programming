#include "holberton.h"

/**
 *
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[count] = src[count];
	}
	for (; count < n; i++)
		dest[count] = '\0';
	return (dest);
}
