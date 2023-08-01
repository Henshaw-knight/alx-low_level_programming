#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * of type listint_t
 *
 * @h: pointer to the first node of the linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		i++;
		ptr = ptr->next;
	}
	return (i);
}
