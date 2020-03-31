#include "holberton.h"

/**
 * create_file - function
 * @filename: string with file name
 * @text_content: string
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count, rw;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (fd);

	if (!text_content)
		return (-1);
	for (text_content[count])
	{
		count++;
	}
	rw = write(STDIN_FILENO, text_content, cont);
	if (rw == -1)
		return (rw);
	close(fd);

	return (1);
}
