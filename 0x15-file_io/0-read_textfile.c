#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to the text file
 * @l: number of letters
 * Return: actual number of bytes
 */
ssize_t read_textfile(const char *filename, size_t l)
{
	char *b;
	ssize_t w;
	ssize_t fd;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	b = malloc(sizeof(char) * l);
	t = read(fd, b, l);
	w = write(STDOUT_FILENO, b, t);

	free(b);
	close(fd);
	return (w);
}

