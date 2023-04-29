#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: adds new string to the node
 * Return: the address of the new element, if NULL output false
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *create_node;

	while (str[len])
		len++;

	create_node = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	create_node->str = strdup(str);
	create_node->len = len;
	create_node->next = *head;
	*head = create_node;

	return (create_node);
}
