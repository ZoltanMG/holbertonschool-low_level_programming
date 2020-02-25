#include "holberton.h"

/**
 * _strstr - the function
 * @haystack: char
 * @needle: char
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;

	if (*needle == '\0')
		return (0);
	for (i = 0; *haystack; haystack++, i++)
	{
		if (*haystack == *needle)
		{
			needle++;
			j++;
		}
		else
		{
			needle = needle - j;
			j = 0;
		}
		if (*needle == '\0')
		{
			haystack = haystack - j + 1;
			return (haystack);
		}
	}
	return (0);
}
