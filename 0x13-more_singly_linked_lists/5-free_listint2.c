#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: pointer to the first node. Pointer to a pointer
 *
 * Return: void (nothing)
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
