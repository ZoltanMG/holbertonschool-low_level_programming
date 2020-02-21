#include "holberton.h"
/**
 * rot13 - function
 * @str: char
 * Return: str
 */
char *rot13(char *str)
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
