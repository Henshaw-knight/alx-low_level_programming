#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a
 * linked list of type listint_t
 *
 * @h: pointer to the first node of the linked list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	int count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
