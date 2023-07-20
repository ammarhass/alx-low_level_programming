#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - print all
 *@format: constant pointer to constant char
 *
 *Return: Nothing
 *
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list p;
	char *s = "";
	char *st;

	va_start(p, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(p, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(p, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(p, double));
					break;
				case 's':
					st = va_arg(p, char *);
					if (!st)
						st = "(nil)";

					printf("%s%s", s, st);
					break;
				default:
					i++;
					continue;
			}
			i++;
			s = ", ";
		}
	}
	printf("\n");
	va_end(p);
}
