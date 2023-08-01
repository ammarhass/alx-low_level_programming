#include"lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 *
 * @head: pointer to pointer to struct listint_t
 * Return: num in the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	p = (*head);
	*head = (*head)->next;
	free(p);

	return (n);
}

