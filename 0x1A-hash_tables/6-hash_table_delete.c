#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: pointer to hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			ptr = ht->array[i];
			while (temp)
			{
				temp = ptr->next;
				free(ptr->value);
				free(ptr->key);
				free(ptr);
				ptr = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
