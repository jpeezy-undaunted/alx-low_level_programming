#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a linked list
 * @head: pointer to the first node in the list
 * @n: inserts data in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new;

	return (new_node);
}
