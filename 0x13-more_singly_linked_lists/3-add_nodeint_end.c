#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * of type listint_t
 *
 * @head: pointer to a pointer, points to the first node of the linked list
 * @n: the data part of the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *ptr;

	ptr = *head;
	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (ptr == NULL)
		*head = end;
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = end;
	}
	return (end);
}
