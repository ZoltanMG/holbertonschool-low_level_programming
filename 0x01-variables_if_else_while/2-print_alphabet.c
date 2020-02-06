#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letra = 'a';
while (letra <= 'z')
{
putchar(letra);
letra++;
}
putchar('\n');
return (0);
}
