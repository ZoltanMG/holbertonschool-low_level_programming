#include <stdio.h>

/**
 * main - function main
 * @argc: int
 * @argv: char
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
