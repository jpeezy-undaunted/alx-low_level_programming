#include "lists.h"
#include <stddef.h>
/**
 * list_len - length of the string that returns number
 * of elemnents in the list
 * @h: the pointer node
 * Return: number of elements
 */

size_t list_len(const list_h *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		node1++;
		h = h->next;
	}
	return (node1);
}
