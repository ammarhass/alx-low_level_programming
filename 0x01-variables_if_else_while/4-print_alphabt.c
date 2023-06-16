#include<stdio.h>

/**
 * main - prints alphabet except e and q
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}

		putchar(ch);
	}
	putchar('\n');

	return (0);
}
