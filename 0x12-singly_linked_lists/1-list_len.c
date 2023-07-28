#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list of type list_t
 *
 * @h: pointer to first node of the list
 *
 * Return: the number of elements in the linked list
 */
size_t list_len(const list_ *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		count++;
		h = h->nex;
	}

	return (count);
}
