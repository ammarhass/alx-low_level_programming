#include"lists.h"

/**
 * insert_nodeint_at_index - function
 * that inserts a new node at a given position
 *
 * @head: pointer to pointer struct linked list
 * @idx: index of the node to be added
 * @n: data of the node
 * Return: pointer to the required node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = *head;
	listint_t *temp;
	unsigned int i = 1;

	if (*head == NULL && idx != 0)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	while (p)
	{
		if (i == idx)
		{
			temp->next = p->next;
			p->next = temp;
			return (temp);
		}
		p = p->next;
		i++;
	}
	return (NULL);
}

