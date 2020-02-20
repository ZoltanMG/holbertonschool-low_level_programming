#include "holberton.h"

/**
 * _strcmp - compare two string
 * @s1: char 1
 * @s2: char 2
 * Return: r
 */
int _strcmp(char *s1, char *s2)
{
	int count;
	int res;

	for (count = 0; s1[count] != '\0' || s2[count] != '\0'; count++)
	{
		if (s1[count] != s2[count])
		{
			res = s1[count] - s2[count];
			break;
		}
		else
		{
			res = 0;
		}
	}
	return (res);
}
