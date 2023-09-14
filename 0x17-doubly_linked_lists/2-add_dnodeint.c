#include "lists.h"
/**
 * add_dnodeint -  function that adds a new node
 * at the beginning of a dlistint_t list
 *
 * @head: head of the list
 * @n: number to be added to the list
 * Return: pointer to the node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp;

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
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (*head);
}
