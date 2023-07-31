#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list of type
 * list_t
 *
 * @head: pointer to a pointer, points to the first node
 * @str: the data of the node. String arg that will be duplicated
 *
 * Return: the address of the new element on success or Null otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;
	int i = 0;

	ptr = *head;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);
	while (str[i])
		i++;
	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = NULL;

	if (ptr == NULL)
		*head = tmp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = tmp;
	}
	return (tmp);
}
