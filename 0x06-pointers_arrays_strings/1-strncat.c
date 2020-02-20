#include "holberton.h"

/**
 * _strncat - sum strings
 * @dest: char 1
 * @src: char 2
 * @n: int 1
 * Return: dest

 */
char *_strncat(char *dest, char *src, int n)
{
	int count1;
	int count2;

	for (count1 = 0; dest[count1] != '\0'; count1++)
	{
	}
	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)
	{
		dest[count1 + count2] = src[count2];
	}
	return (dest);
}
