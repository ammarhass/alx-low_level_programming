#include"lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a listint_t linked list
 *
 * @head: pointer to pointer to struct listint_t
 * @index: index of the node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 1;
	listint_t *p = *head;
	listint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = (*head)->next;

	if (index == 0)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
		return (1);
	}

	if ((*head)->next == NULL)
		return (-1);

	while (p)
	{
		if (idx == index)
		{
			p->next = temp->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		p = p->next;
		temp = temp->next;
		idx++;
	}

	return (-1);
}



