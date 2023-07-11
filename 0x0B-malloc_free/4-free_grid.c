#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 *
 * @grid: pointer to 2D array
 * @height: height of the arry
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{

	int k = 0;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);
}
