#include<stdio.h>
#include"main.h"

/**
 * _strlen - get the length of a string using pointer
 * @s: pointer to char
 * Return: length of a string
 */

int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{}

	return (k);
}

