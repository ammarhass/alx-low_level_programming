#include"lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: constant pointer to the structure
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{

	const list_t *p = h;
	size_t counter = 0;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			return (++counter);
		}
		printf("[%d] %s\n", p->len, p->str);
		counter++;
		return (counter);
	}

	while (p->next != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
			p = p->next;
			counter++;
			continue;
		}
		printf("[%d] %s\n", p->len, p->str);
		p = p->next;
		counter++;
	}

	if (p->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	printf("[%d] %s\n", p->len, p->str);
	counter++;
	return (counter);
}
