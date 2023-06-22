#include<stdio.h>
#include"main.h"

/**
 * print_square - function that prints a square, followed by a new line
 *
 * @size: size of a squre
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		if (i < size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
