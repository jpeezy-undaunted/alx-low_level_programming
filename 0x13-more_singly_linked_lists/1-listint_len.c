#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: points to linked list of type listint_t and traverses
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
