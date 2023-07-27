#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @str: pointer to char
 * @head: pointer to pointer to struct list_t
 * Return: pointer to struct list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *t = *head;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		p->str = strdup(str);
		p->len = strlen(str);
		p->next = NULL;
		*head = p;
		return (p);
	}

	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;

	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = p;

	return (p);
}
