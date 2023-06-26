#include<stdio.h>
#include"main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{

	int k;

	for (k = 0; s[k] != '\0'; k++)
	{}

	while (k > 0)
	{
		_putchar(s[--k]);
	}
	_putchar('\n');
}
