#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: pointer to hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;

	unsigned int long k;
	int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (k = 0; k < ht->size; k++)
	{
		if (ht->array[k] != NULL)
		{
			if (i == 1)
				printf(", ");
			ptr = ht->array[k];
			while (ptr)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
				i = 1;
			}
		}
	}
	printf("}\n");
}
