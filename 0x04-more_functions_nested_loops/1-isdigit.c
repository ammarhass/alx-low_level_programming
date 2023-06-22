#include<stdio.h>
#include"main.h"

/**
 * _isdigit - check if it is a digit or not
 * @c: variable to check digit or not
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
