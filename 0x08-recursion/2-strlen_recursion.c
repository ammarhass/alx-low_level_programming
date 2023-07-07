#include<stdio.h>
#include"main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: pointer to char
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}

	else
		return (0);

}