#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * array_range - allocate array
 * @min: min
 * @max: max
 * Return: return pointer to char
 */

int *array_range(int min, int max)
{
	int j = 0;
	int *pt;

	if (min > max)
		return (NULL);

	pt = malloc(sizeof(int) * (max - min + 1));
	if (pt == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		pt[j++] = min;
	}
	return (pt);
}
