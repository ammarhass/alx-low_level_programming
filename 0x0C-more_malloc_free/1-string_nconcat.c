#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	char *str;

	if (s1 != NULL)
	{
		for (; s1[len_1] != '\0'; len_1++)
		{}
	}
	if (s2 != NULL)
	{
		for (; s2[len_2] != '\0'; len_2++)
		{}
		if (n >= len_2)
			n = len_2;
	}

	str = malloc(sizeof(char) * (len_1 + n + 1));
	if (str == NULL)
		return (NULL);

	while (s1 != NULL && i < len_1)
	{
		str[i] = s1[i];
		i++;
	}
	while (s2 != NULL && j < n)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';

	return (str);
}
