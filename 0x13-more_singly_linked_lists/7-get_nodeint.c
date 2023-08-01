#include"lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 *
 * @head: pointer to struct linked list
 * @index: index of the node
 * Return: the required node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p = head;

	if (head == NULL)
		return (NULL);

	while (p)
	{
		if (i == index)
		{
			return (p);
		}
		p = p->next;
		i++;
	}
	return (NULL);
}
