#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 *
 * @ht: pointer to the hash table to delete
 *
 * Return: void (nothing)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	hash_node_t *ptr = NULL;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		temp = (ht->array)[i];
		while (temp != NULL)
		{
			ptr = temp->next;
			free(temp->key);
			free(temp->value);

			free(temp);
			temp = ptr;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
