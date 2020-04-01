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
	int fd, count = 0, rw;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (fd);

	while (text_content[count])
	{
		count++;
	}
	if (text_content = NULL)
	{
		close (fd);
		return (-1);
	}
	rw = write(fd, text_content, count);
	if (rw == -1)
		return (rw);
	close(fd);

	return (1);
}
