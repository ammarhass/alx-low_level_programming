#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h: pointer to const dlistint_t
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *ptr = h;
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (ptr)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
