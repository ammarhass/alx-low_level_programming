#include"lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: pointer to linstint
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p = head;
	listint_t *temp;

	if (head == NULL)
		return;

	while (p->next != NULL)
	{
		temp = p;
		p = p->next;
		free(temp);
	}

	free(p);
}

