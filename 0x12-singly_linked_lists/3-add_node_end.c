#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of the list_t list.
 * @head: head pointer of th linked list.
 * @str: string pointer that duplicates and stores a list
 * Return: returns the address of the new node created at the end.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = ptr;
	}
	return (ptr);
}
