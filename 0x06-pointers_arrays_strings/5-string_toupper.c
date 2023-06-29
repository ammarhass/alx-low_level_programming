#include<stdio.h>
#include"main.h"

/**
 * string_toupper - function changes all lowercase letters of a string to upper
 * @s: pointer to a string
 * Return: pointer to char
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}

