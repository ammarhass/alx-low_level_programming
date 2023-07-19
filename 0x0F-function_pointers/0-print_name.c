#include<stdio.h>

/**
 * print_name - function that prints a name
 *
 * @name: string to be printed
 * @f: pointer to function that takes a pointer to char and return nothing
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
