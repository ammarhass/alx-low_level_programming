#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 *
 * @h: pointer to dlistint_t
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *ptr = h;

	if (ptr == NULL)
		return (0);

	while (ptr)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
