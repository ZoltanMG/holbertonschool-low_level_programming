#include "holberton.h"

/**
 * _strstr - the function
 * @haystack: char
 * @needle: char
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int c;
	int i = 0;
	int b;
	int r = 0;

	for (b = 0; haystack[b] != '\0'; b++)
	{}

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (c = 0; haystack[c] != '\0'; c++)
		{
			if (needle[a] == haystack[c])
			{
				i++;
				r = b - i;
				break;
			}
		}
		
	}
	return (haystack + r);
}
