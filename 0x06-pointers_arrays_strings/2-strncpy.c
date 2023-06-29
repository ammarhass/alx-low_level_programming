#include<stdio.h>
#include"main.h"

/**
 * _strncpy - function that copies a string
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of character
 * Return: pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;
	int l1 = 0, l2 = 0;

	for (l1 = 0; dest[l1] != '\0'; l1++)
	{}
	for (l2 = 0; src[l2] != '\0'; l2++)
	{}

	if (n >= l2)
	{
		for (i = 0; i < l2; i++)
		{
			dest[i] = src[j++];
		}
		for (; i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[j++];
		}
	}
	return (dest);
}
