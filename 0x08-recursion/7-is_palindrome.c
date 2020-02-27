/**
 * func - funtion
 * @s: pointer
 * @n: int
 * @z: int
 * Return: functions
 */
int func(char *s, int n, int z)
{
	if (s[0] == '\0')
		return (1);
	if (z == n || z > n)
		return (1);
	if (s[z] != s[n])
		return (0);
	return (func(s, n - 1, z + 1));
}

/**
 * cont - funtion
 * @s: pointer
 * @n: int
 * Return: functions
 */
int cont(char *s, int n)
{
	if (s[n] != '\0')
		return (cont(s, n + 1));
	return (func(s, n - 1, 0));
}

/**
 * is_palindrome - funtion
 * @s: pointer
 * Return: functions
 */
int is_palindrome(char *s)
{
	return (cont(s, 0));
}
