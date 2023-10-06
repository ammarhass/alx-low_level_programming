#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int k = 0;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		ptr[k] = NULL;

	return (ptr);
}
