#include<stdio.h>
#include"main.h"

/**
 * rev_string - function that reverse a string
 * @s: pointer to char
 * Return: void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char var;

	for (i = 0; s[i] != '\0'; i++)
	{}

	while (j < i)
	{
		var = s[--i];
		s[i] = s[j];
		s[j++] = var;
	}
}
