#include<stdio.h>
#include"main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of bytes to be copied
 *
 * Return: pointer to string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
