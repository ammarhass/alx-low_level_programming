#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of variable arguments
 *
 * Return: sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	int s = 0;
	unsigned int i = 0;

	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(p, int);
	}

	va_end(p);

	return (s);
}
