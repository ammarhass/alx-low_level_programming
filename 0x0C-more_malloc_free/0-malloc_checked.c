#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the allocated memroy
 *
 * Return: a pointer to the allocated memeory
 */






void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);

	return (pt);
}
