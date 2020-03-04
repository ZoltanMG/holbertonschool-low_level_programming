#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: char
 * @s2: char
 * Return: arr
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i;
	int j;

	if (s1 == null)
	{
		s1 = "";
	}
	if (s2 == null)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
	}

	for (j = 0; s2[j]; j++)
	{
	}

	arr = malloc((i + j + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		arr[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';

	return (arr);
}
