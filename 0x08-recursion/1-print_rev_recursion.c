#include<stdio.h>
#include"main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: pointer to char
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
	}
	else
		return;
	
	putchar(*--s);
}
