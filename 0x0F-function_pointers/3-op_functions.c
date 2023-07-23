#include"calc.h"
#include<stdio.h>

/**
 * op_add - function to add two numbers
 * @a: num 1
 * @b: num 2
 * Return: result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to substracte to numbers
 * @a: num 1
 * @b: num 2
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiplicate two numbers
 * @a: num 1
 * @b: num 2
 * Return Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function two divide two numbers
 * @a: num 1
 * @b: num 2
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);

	return (a / b);
}

/**
 * op_mod - function to get the modulus of two numbers
 * @a: num 1
 * @b: num 2
 * Return: Result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
