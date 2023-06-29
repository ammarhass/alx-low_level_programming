#include<stdio.h>
#include"main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * Return: pointer to the concatenates string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	int l1 = 0, l2 = 0, t_len = 0;

	for (l1 = 0; dest[l1] != '\0'; l1++)
	{}
	for (l2 = 0; src[l2] != '\0'; l2++)
	{}

	t_len = l1 + l2;

	for (i = l1; i < t_len; i++)
	{
		dest[i] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
