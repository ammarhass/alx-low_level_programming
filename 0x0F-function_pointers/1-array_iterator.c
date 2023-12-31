#include<stdio.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 *
 * @array: array to be printed
 * @size: size of the array
 * @action: pointer to function that takes an int and return nothing
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
