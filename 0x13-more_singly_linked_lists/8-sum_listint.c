#include"lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * (n) of a listint_t linked list
 *
 * @head: pointer to struct linked list
 * Return: sum of all data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	if (head == NULL)
		return (0);

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
