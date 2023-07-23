#include<stdio.h>
#include<string.h>
#include"calc.h"

/**
 * main - main function
 * @argv: number of arguments on the command line
 * argc: array of C-style strings
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *p;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	p = argv[2];
	num2 = atoi(argv[3]);

	f =  get_op_func(p);
	if (f == NULL || p[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*p == '/' && num2 == 0) || (*p == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));

	return (0);
}
