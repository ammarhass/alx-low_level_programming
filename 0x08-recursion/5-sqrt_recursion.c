#include<stdio.h>
#include"main.h"

/**
 * PerfectSquare - check if it is a perfect square or not
 * @low: int low
 * @hi: int hi
 * @num: int num
 * Return: int
 */
int PerfectSquare(int low, int hi, unsigned long int num)
{
	unsigned long int mid = (hi + low) / 2;

	if (num == 1)
	{
		return (1);
	}
	if (low * low == num)
	{
		return (low);
	}
	if (hi * hi == num)
	{
		return (hi);
	}
	if ((hi - low) < 1)
	{
		return (-1);
	}
	else if (mid * mid == num)
	{
		return (mid);
	}
	else if (mid * mid > num)
	{
		return (PerfectSquare(low, mid - 1, num));
	}
	else if (mid * mid < num)
	{
		return (PerfectSquare(mid + 1, hi, num));
	}
	return (0);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: num
 * Return: square root
 */

int _sqrt_recursion(int n)
{

	int low = 1;
	int hi = n;
	int x = 0;

	if (n < 0)
	{
		return (-1);
	}

	x = PerfectSquare(low, hi, n);


	return (x);
}
