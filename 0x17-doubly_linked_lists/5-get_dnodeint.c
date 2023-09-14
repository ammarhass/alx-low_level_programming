#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the node
 * Return: address of the node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr)
	{
		if (i == index)
			return (ptr);

		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
