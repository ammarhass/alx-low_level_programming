#include<stdio.h>
#include"main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to string
 * @c: char to find
 * Return: a pointer to the first occurrence of the character c, or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
