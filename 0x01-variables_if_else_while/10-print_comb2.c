#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = '0';
int b = '0';

while (a <= '9' && b <= '9')
{
putchar(a);
putchar(b);
b++;
if (b > '9')
{
a++;
b = '0';
}
if (b != '0' || a != '0' && a < '9' && b < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
