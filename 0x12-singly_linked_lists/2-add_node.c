#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list
 *
 * @head: pointer to to struct list_t
 * @str: pointer to char
 * Return: pointer to struct list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

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
	p->next = (*head);
	*head = p;

	return (p);
}
