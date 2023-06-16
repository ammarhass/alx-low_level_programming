#include<stdio.h>

/**
 * main - prints all single digits number of base 10
 *
 * Return: 0
 */

int main(void)
{
	unsigned int num = 48;

	for (num = 48; num < 58 ; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
