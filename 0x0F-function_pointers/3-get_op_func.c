#include<stdio.h>
#include"calc.h"

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 *
 * @s: pointer to char
 * Return: pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
