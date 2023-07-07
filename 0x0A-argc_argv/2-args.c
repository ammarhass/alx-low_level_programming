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
	int counter = 0;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (counter = 1; counter < argc; counter++)
		{
			printf("%s\n", argv[counter]);
		}
	}

	return (0);
}
