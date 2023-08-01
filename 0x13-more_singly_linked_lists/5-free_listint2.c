#include"lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer to head
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	while (*head)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}

	*head = NULL;
}


