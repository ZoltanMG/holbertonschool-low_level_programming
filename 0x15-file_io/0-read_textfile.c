#include "holberton.h"

/**
 * read_textfile - function
 * @filename: string, namber of file
 * @letters: number of letters
 *
 * Return: size of print in bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t nr_bytes;

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nr_bytes = read(fd, buff, letters);

	if (nr_bytes == -1)
		return (0);
	write(STDOUT_FILENO, buff, nr_bytes);
	close(fd);
	return (nr_bytes);
}
