#include<stdio.h>
#include"main.h"

/**
 * print - print number in int
 * @n: number of digit
 * Return: void
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: numbers to be printed
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			print(i);
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			print(i);
			if (i != 98)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	}
	else
	{
		print(n);
	}
	_putchar('\n');
}
