#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - print strings
 *@separator: pointer to const char
 *@n: no of variable arguments
 *
 *Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list p;
	char *str;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if ((i != n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
