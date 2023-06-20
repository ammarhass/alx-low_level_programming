#include"main.h"

/**
 * print - print num in int
 * @n: number to be printed
 * Return: void
 */

void print(unsigned long n)
{

	if (n / 10)
	{
		print(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * print_even_sum - prints sum of even numbers in fibonacci series
 *
 * Return: void
 */
void print_even_sum(void)
{
	unsigned long first = 1;
	unsigned long second = 1;
	unsigned long third;
	unsigned long sum = 0;
	int i;

	for (i = 2; third  < 4000000; i++)
	{
		third = first + second;
		first = second;
		second = third;


		if (third % 2 == 0)
		{
			sum += third;
		}
	}
	print(sum);
	_putchar('\n');
}

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	print_even_sum();
	return (0);
}
