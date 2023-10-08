#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr, *temp;
	unsigned long int idx;
	char *str;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	str = strdup(value);
	if (str == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = str;
			return (1);
		}
		temp = temp->next;
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		free(str);
		return (0);
	}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (0);
	}
	ptr->value = str;
	ptr->next = ht->array[idx];
	ht->array[idx] = ptr;
	return (1);
}
