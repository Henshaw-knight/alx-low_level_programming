#include "lists.h"

/**
 * free_list - function that frees a list of type list_t
 *
 * @head: head of the linked list
 *
 * Return: void (nothing)
 */
void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
