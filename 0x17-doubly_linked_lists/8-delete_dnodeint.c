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
 * delete_dnodeint_at_index - function that deletes the node
 * at index index of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr, *temp;
	unsigned int i = 1;
	size_t size = dlistint_len(*head);

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
		return (1);
	}
	else if (index == size - 1)
	{
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->prev->next = NULL;
		free(ptr);
		return (1);
	}
	else if (index > 0 && index < size - 1)
	{
		ptr = (*head)->next;
		while (ptr)
		{
			if (i == index)
			{
				temp = ptr;
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
				free(temp);
				return (1);
			}
			i++;
			ptr = ptr->next;
		}
	}
	return (-1);
}
