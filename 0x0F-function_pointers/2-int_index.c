#include<stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to a function that takes an int an return an int
 *
 * Return: index of the elment
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

