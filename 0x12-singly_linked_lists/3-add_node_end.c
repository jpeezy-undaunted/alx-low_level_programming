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

	while (str[len])
		len++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

	while (ptr != NULL)
	{
		ptr = *head;
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
