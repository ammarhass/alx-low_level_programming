#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 *
 * @head: head of the list
 * Return: sum of all the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

