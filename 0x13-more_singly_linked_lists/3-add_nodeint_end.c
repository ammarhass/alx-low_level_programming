#include"lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 *
 * @head: pointer to pointer to sturct listint_t
 * @n: number to add to the list
 * Return: pointer to struct listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = *head;
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = temp;

	return (*head);
}

