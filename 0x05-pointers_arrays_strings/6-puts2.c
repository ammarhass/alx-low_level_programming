#include<stdio.h>
#include"main.h"

/**
 * puts2 - prints every other character of a string
 *  starting with the first character,
 * @str: pointer to char
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, l = 0;

	for (l = 0; str[l] != '\0'; l++)
	{}

	while (i < l)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
