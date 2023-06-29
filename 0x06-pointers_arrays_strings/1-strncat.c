#include<stdio.h>
#include"main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of character to concatenate
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;
	int t_len = 0, l1 = 0, l2 = 0;

	for (l1 = 0; dest[l1] != '\0'; l1++)
	{}
	for (l2 = 0; src[l2] != '\0'; l2++)
	{}

	t_len = l1 + l2;

	if (n >= l2)
	{
		for (i = l1; i < t_len; i++)
		{
			dest[i] = src[j++];
		}
		dest[i] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[l1++] = src[j++];
		}
		dest[l1] = '\0';
	}
	return (dest);
}
