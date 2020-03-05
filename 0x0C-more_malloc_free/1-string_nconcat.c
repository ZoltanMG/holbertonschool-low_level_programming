#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - funtion
 * @s1: char
 * @s2: char
 * @n: int
 * Return: arr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int con = 0, con1 = 0, con3 = 0, con4 = 0, c = n;
	char *arr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[con])
	{
		con++;
	}
	while (s2[con1])
	{
		con1++;
	}
	if (n >= con1)
	{
		c = con1;
		arr = malloc(sizeof(char) * (con + con1 + 1));
	}
	else if (n < con1)
	{
		arr = malloc(sizeof(char) * (con + n + 1));
	}
	if (arr == NULL)
		return (NULL);
	for (con3 = 0; con3 < con; con3++)
	{
		arr[con3] = s1[con3];
	}
	for (con4 = 0; con4 < c ; con4++, con3++)
	{
		arr[con3] = s2[con4];
	}
	arr[con3] = '\0';
	return (arr);
}
