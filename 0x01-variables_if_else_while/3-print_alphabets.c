#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m = 'a';
int M = 'A';
while (m <= 'z')
{
putchar(m);
m++;
}
while (M <= 'Z')
{
putchar(M);
M++;
}
putchar('\n');
return (0);
}
