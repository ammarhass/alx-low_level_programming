#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the array
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *pt;
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		pt[i] = 0;
	}
	p = pt;

	return (p);
}


