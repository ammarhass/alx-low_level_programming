#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char to initalize the array
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k = 0;
	char *p;

	p = malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
		return (NULL);

	while (k < size)
		p[k++] = c;

	return (p);
}
