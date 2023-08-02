#include"lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 *
 * @head: pointer to pointer to struct listint
 * Return: pointer to struct listint
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *t;

	if (*head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	p = (*head)->next;
	t = p->next;
	p->next = (*head);
	(*head)->next = NULL;

	while (t)
	{
		*head = p;
		p = t;
		t = t->next;
		p->next = (*head);
	}
	*head = p;

	return (*head);
}

