#include"lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 *
 * @h: pointer to struct listint_t
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	if (h == NULL)
		return (0);

	if (h->next == NULL)
		return  (++count);

	while (p->next != NULL)
	{
		p = p->next;
		count++;
	}

	return (++count);
}
