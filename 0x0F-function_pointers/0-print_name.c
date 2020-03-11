/**
 * print_name - function to function
 * @name: string
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		f(name);
}
