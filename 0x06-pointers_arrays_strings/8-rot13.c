#include "holberton.h"

/**
 * leet - function
 * @str: char
 * Return: str
 */
char *leet(char *str)
{
	char az[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int out[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int a;
	int b;

	a = 0;
	while (str[a] != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (str[a] == az[b])
			{
				str[a] = out[b];
				break;
			}
		}
		a++;
	}
	return (str);
}
