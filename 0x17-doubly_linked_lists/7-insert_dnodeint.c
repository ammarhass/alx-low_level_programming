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

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: number to be added to the node
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	unsigned int i = 1;
	size_t size = dlistint_len(*h);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == size)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (idx > 0 && idx < size)
	{
		ptr = (*h)->next;
		while (ptr)
		{
			if (i == idx)
			{
				temp->next = ptr;
				temp->prev = ptr->prev;
				ptr->prev->next = temp;
				ptr->prev = temp;
				return (temp);
			}
			i++;
			ptr = ptr->next;
		}
	}
	return (NULL);
}
