#include"main.h"

/**
 *rev_string - function to reverse a string
 *@s: pointer to char
 *Return: void
 */

void rev_string(char *s)
{
	int i, j = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
	{}

	while (j < i)
	{
		temp = s[--i];
		s[i] = s[j];
		s[j++] = temp;
	}
}

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *
 * @b: pointer to the string
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	int num = 0, len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);


	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			num += 1 << j;
			j++;
		}

		else if (b[i] == '0')
			j++;

		else
			return (0);
	}

	return (num);
}
