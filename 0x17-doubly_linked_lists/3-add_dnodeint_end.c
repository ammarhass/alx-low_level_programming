#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 *
 * @head: head of the list
 * @n: number to be added to the node
 * Return: pointer to the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	temp->prev = ptr;

	return (temp);
}
