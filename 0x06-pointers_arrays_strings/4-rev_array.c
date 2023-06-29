#include<stdio.h>
#include"main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @n: size of the array
 * @a: pointer to array of int
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;
	int t;

	for (i = 0; i < j; i++)
	{
		t = a[i];
		a[i] = a[j];
		a[j--] = t;
	}
}
