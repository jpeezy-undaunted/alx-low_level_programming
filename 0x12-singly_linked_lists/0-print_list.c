#include "lists.h"
#include <stddef.h>
/**
 * print_list - Prints all the elements of a list_t list
 * @h: list pointer
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t node1 = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ?
				h->str : "(nil)");
		h = h->next;
		node1++;
	}
	return (node1);
}
