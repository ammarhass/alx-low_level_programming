#include<stdio.h>
#include"main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0;
	unsigned int sum_1 = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_1 += a[i * size + j];
			}
			if (i + j == size - 1)
			{
				sum_2 += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
