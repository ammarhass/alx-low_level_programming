#include<stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	unsigned int c = 48;

	for (c = 48 ; c < 58 ; c++)
	{
		putchar(c);

		if (c < 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
