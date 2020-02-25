#include "holberton.h"

/**
 * _strstr - the function
 * @haystack: char
 * @needle: char
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (!*needle)
		return (haystack);
	for (j = 0; *haystack; haystack++)
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
		if (!*needle)
		{
			haystack = haystack - j + 1;
			return (haystack);
		}
	}
	return (0);
}
