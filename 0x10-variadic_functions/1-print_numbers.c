#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: poiner to constant char
 * @n: number of variable arguments
 *
 * Return: Nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;


	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));

		if ((i != n - 1) && separator != NULL)
		printf("%s", separator);
	}

	va_end(p);

	printf("\n");
}
