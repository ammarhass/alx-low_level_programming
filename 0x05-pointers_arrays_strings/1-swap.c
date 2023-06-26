#include<stdio.h>
#include"main.h"

/**
 * swap_int - function to swap to integers using pointer
 * @a: int variable to swap
 * @b: int variable to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
