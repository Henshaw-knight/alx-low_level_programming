#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: the size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = NULL;
	hash_node_t **h_array = NULL;
	unsigned long int i;

	h_table = malloc(sizeof(hash_table_t));
	if (h_table == NULL)
		return (NULL);

	h_array = malloc(sizeof(hash_node_t *) * size);
	if (h_array == NULL)
	{
		free(h_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		h_array[i] = NULL;

	h_table->size = size;
	h_table->array = h_array;

	return (h_table);
}

