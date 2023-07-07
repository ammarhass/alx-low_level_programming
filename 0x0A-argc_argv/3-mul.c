#include<stdio.h>
#include<stdlib.h>
/**
 * _atoi - converts a sing to int
 * @s: pointer to char
 * Return: int
 */


int _atoi(char *s)
{
	unsigned int n = 0;
	int  i = 0, s_count = 0;
	int f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 58)
		{
			n = (n * 10) + (s[i] - '0');
			f = 1;
		}
		else if (f == 1)
		{
			break;
		}
		if (s[i] == '-')
		{
		s_count++;
		}
	}
	if (s_count % 2 != 0)
	{
		return (-1 * n);
	}
	if (f == 0)
	{
		return (0);
	}
	return (n);
}

/**
 * main - mul to number
 * @argc: number of arguments on the command line
 * @argv: array of C-style sings
 * Return: success
 */

int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;
	int result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;
	printf("%d\n", result);

	return (0);
}
