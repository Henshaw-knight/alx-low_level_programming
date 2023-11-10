#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: pointer to the hash table
 *
 * Return: void (nothing)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	int beginning = 1;

	if (ht == NULL)
		return;

	printf("{");

	while (i < ht->size)
	{
		if ((ht->array)[i] != NULL)
		{
			temp = (ht->array)[i];
			while (temp != NULL)
			{
				if (beginning)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					beginning = 0;
				}
				else
					printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
