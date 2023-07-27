#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: pointer to struct list_t
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *p = head;
	list_t *t;

	if (head == NULL)
		return;

	while (p->next != NULL)
	{
		t = p;
		p = p->next;
		free(t->str);
		free(t);
	}
	free(p->str);
	free(p);
	head = NULL;
}
