#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: A pointer to the file
 * @ptr: pointer to a string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *ptr)
{
	int fd;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (ptr != NULL)
	{
		for (len = 0; ptr[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, ptr, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
