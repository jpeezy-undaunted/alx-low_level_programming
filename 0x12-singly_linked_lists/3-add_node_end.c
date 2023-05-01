#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of the list_t list.
 * @head: head pointer of th linked list.
 * @str: string pointer that duplicates and stores a list
 * Return: returns the address of the new node created at the end.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *new_node = *head;
	unsigned int len = 0;

	ptr = *head;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	while (ptr != NULL)
	{
		ptr->len = len;
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
