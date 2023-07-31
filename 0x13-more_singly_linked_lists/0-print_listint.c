#include"lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: pointer to struct listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
	{
		printf("%d\n", h->n);
		return (++count);
	}

	while (p->next != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	printf("%d\n", p->n);

	return (++count);
}
