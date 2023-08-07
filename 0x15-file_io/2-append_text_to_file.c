#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @ptr: pointer to the string
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *ptr)
{
	int o;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (ptr != NULL)
	{
		for (len = 0; ptr[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, ptr, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

