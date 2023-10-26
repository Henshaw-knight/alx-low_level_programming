#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position
 *
 * @h: pointer to a pointer, points to the first node of the list
 * @idx: the index of he list where the nedw node should be added.
 * Index starts at 0
 * @n: the data of the new node
 *
 * Return: the address of the new node on success, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int position = idx;
	dlistint_t *new_node, *temp, *temp2;

	if (h == NULL || *h == NULL)
		return (NULL);

	temp = *h;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	while (position != 1)
	{
		temp = temp->next;
		position--;
	}
	temp2 = temp->next;

	temp->next = new_node;
	temp2->prev = new_node;
	new_node->prev = temp;
	new_node->next = temp2;

	return (new_node);
}
