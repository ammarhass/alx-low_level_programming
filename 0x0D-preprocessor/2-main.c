#include<unistd.h>


/**
 * main - prints the file name
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = __FILE__;
	char k = '\n';

	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, &k, 1);


	return (0);
}
