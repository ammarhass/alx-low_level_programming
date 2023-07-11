#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * _strdup -  function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: pointer to char
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int k = 0;
	int length = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
	{}

	s = malloc(sizeof(char) * (length + 1));
	if (s == NULL)
		return (NULL);

	while (k < length)
	{
		s[k] = str[k];
		k++;
	}
	s[k] = '\0';

	return (s);
}


