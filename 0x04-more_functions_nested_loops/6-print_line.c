#include<stdio.h>
#include"main.h"

/**
 * print_line - prints numbers of lines
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
