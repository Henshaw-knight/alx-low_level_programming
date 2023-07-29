#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * of type list_t
 *
 * @head: pointer to a pointer, points to the first
 * @str: string arg to duplicate
 *
 * Return: the address of the new element on success, else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	while (str[i])
		i++;

	ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
