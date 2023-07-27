#include "lists.h"

/**
 * list_len - function that returns
 * the number of elements in a linked list_t list.
 * @h: pointer to list_t
 *
 * Return: size_t
 */



size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t counter = 0;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		counter++;
		return (counter);
	}

	while (p->next != NULL)
	{
		counter++;
		p = p->next;
	}
	counter++;
	return (counter);
}
