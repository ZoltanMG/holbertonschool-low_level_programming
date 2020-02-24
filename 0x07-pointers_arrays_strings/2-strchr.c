#include "holberton.h"

/**
 * _strchr - the function
 * @s: pointer
 * @c: char
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int count;
	int b = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
			return (s + count);
	}
	if (s[count] == c)
		return (s + count);
	return (0);
}
