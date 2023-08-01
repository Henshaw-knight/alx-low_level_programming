#include "lists.h"

/**
 * free_listint - function that frees a linked list of type listint_t
 *
 * @head: pointer to the first node of the list
 *
 * Return: void (nothing)
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
