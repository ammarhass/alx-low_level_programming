#include"main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: number 1
 * @m: number 2
 * Return: number of bits needed to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned long int num = n ^ m;

	for (i = 0; i <= 63; i++)
	{
		if ((num >> i) & 1)
			j++;
	}
	return (j);
}

