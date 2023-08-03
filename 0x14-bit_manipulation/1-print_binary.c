#include"main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: number to print in binary system
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	static int i;

	if (!n && i == 0)
	{
		printf("0");
		return;
	}
	i = 1;
	if (n)
	{
		print_binary(n >> 1);
	}
	else
		return;

	if (n & 1)
		printf("1");

	else
		printf("0");
}
