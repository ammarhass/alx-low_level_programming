#include<stdio.h>
#include<stdlib.h>

/**
 * main - print file name followed by new line
 * @argc: number of arguments on the command line
 * @argv: array of C-style strings
 * Return: Success
 */

int main(int argc, char *argv[])
{
	int count = 0;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}

	return (0);
}
