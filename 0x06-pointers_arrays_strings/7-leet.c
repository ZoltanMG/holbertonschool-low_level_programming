#include "holberton.h"

/**
 * leet - function
 * @str: char
 * Return: str
 */
char *leet(char *str)
{
	char in[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int out[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int a;
	int b;

	a = 0;
	while (str[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (str[a] == in[b])
			{
				str[a] = out[b];
			}
		}
		a++;
	}
	return (str);
}
