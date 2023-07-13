#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates
 * a memory block using malloc and free
 * @ptr: pointer to be reallocated
 * @old_size: old size of the ptr
 * @new_size: new size of the ptr
 * Return: pointer to newely allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_p = malloc((new_size + old_size) * sizeof(char));
		if (new_p == NULL)
			return (NULL);

		return (new_p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_p = realloc(ptr, new_size * sizeof(char));
	if (new_p == NULL)
		return (NULL);

	return (new_p);
}
