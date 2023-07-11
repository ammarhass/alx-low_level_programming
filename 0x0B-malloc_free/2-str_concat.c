#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: string contains the content of s1 and s2 or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0, len2 = 0;
	char *str;

	if (s1 != NULL)
	{
		for (; s1[len1] != '\0'; len1++)
		{}
	}
	if (s2 != NULL)
	{
		for (; s2[len2] != '\0'; len2++)
		{}
	}

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (*s1)
		{
			str[i++] = *s1;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2)
		{
			str[i++] = *s2;
			s2++;
		}
	}
	str[i] = '\0';
	return (str);
}
