#ifndef LIST_H
#define LIST_H

#define<stdio.h>
#define<string.h>
#define<stdlib.h>

/**
 * list_t - structure contain the details of the node
 *
 * @str: pointer to char
 * @len: len of the string
 * @next: pointer to the next node
 */

typedef struct list_t
{
	char *str;
	int len;
	list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
