#include<stdio.h>
#include"main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte to fill the memory with it
 * @n: number of byte to be filled
 *
 * Return: pointer to the memory area after update
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}
