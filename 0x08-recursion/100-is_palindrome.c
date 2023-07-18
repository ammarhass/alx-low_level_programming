#include"main.h"
#include<stdio.h>
#include<string.h>

int check(char *start, char *end);

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
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 *
 * @s: pointer to char
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	unsigned int len = _strlen_recursion(s);
	char *start = s;
	char *end = s + len - 1;

	return (check(start, end));
}

/**
 * check - function
 * @start: pointer to char
 * @end: pointer to char
 * Return: 0 or 1
 */

int check(char *start, char *end)
{
	if (start > end)
		return (1);

	if (*start == *end)
	{
		start++;
		end--;
		return (check(start, end));
	}

	return (0);
}

