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

	ptr = malloc(sizeof(list_t)); /*memory allocation for the new node
	*/
	if (ptr == NULL)
		return (NULL); /*when allocation fails*/
	ptr->str = strdup(str); /*string needs to be duplicated*/
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL); /*returns null if failed*/
	}
	/*creating new node at tge end of the list*/
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
