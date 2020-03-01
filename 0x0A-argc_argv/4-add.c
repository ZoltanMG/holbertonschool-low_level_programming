#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: int
 * @argv: char
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int index;
	int i2;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (index = 1; index < argc; index++)
	{
		for (i2 = 0; argv[index][i2]; i2++)
		{
			if (argv[index][i2] < '0' || argv[index][i2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}
