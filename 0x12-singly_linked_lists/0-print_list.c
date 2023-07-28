#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the first node of the linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", current->len, current->str);
		count++;
		current = current->next;
	}

	return (count);
}
