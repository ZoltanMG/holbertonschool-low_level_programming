#include "holberton.h"

/**
 * cap_string - function
 * @str: char
 * Return: str
 */
char *cap_string(char *str)
{
	int count;
	int count2;
	int aux;

	char crt[12] = {' ', '\t', '\n', ',', ';', '!', '?', '"', '(', ')',
			'{', '}'};

	for (count = 0; str[count] != '\0'; count++)
	{
		for (count2 = 0; crt[count2] != '\0'; count2++)
		{
			if (str[count] == crt[count2] && (str[count + 1] < 65 &&
							  str[count + 1] > 90))
			{
				aux = str[count + 1];
				aux = aux - 32;
				str[count + 1] = aux;
			}
		}
	}
	return (str);
}
