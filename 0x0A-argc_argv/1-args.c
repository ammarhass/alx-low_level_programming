#include<stdio.h>
#include<stdlib.h>

/**
 * main - print function argument
 * @argc: number of arguments on the command line
 * @argv: array of C-style strings
 * Return: success
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);


	return (0);
}
