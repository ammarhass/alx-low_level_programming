#include<stdio.h>
#include"main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: return the sign of the number
 * Return: 0 ,1 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
