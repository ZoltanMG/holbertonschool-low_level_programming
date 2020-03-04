#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i;
	int j;

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

	return (arr);
}
