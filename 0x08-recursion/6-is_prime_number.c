#include<stdio.h>
#include"main.h"

/**
 * is_prime - check if it is a prime or not
 * @n: number
 * @k: intger
 * Return: intger
 */

int is_prime(int n, int k)
{
	if (k  > n / 2)
	{
		return (1);
	}
	if (n % k == 0)
	{
		return (0);
	}
	return (is_prime(n, k + 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number
 * otherwise return 0
 * @n: number
 * Return: intger
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
