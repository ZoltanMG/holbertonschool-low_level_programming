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

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == c)
		{
			s++;
			return (s);
		}
		else
		{
			return (NULL)
		}
		s++;
	}
	return (0);
}
