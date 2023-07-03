#include<stdio.h>
#include"main.h"

/**
 * _strstr - unction that locates a substring
 * @s: pointer to string
 * @accept: pointer to string
 *
 * Return: pointer to substring
 */

char *_strstr(char *s, char *accept)
{

	unsigned int counter = 0;
	unsigned int i = 0, j = 0, len = 0;

	for (len = 0; accept[len] != '\0'; len++)
	{}

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i + counter] == accept[j])
			{
				counter++;
			}
			else
			{
				break;
			}
		}

		if (counter == len)
		{
		return (&s[i]);
		}

		else
		{
		counter = 0;
		}
		i++;
	}

	return (0);
}
