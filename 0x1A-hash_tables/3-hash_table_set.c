#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key cannot be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || ht->size == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	temp = (ht->array)[index];
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				free(new_node->key), free(new_node->value);
				free(new_node);
				return (1);
			}
			temp = temp->next;
		}

		temp = (ht->array)[index];
		new_node->next = temp;
		(ht->array)[index] = new_node;
	}
	else
		(ht->array)[index] = new_node;
	return (1);
}
