#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: list pointer
 *
 * Return: size_t
 */

size_t print_list(const list_t *h);
{
	const list_t *present = h;

	size_t node1 = 0;

	while (present != NULL)
	{
		printf("[%d] %s\n", present->len, present->str != NULL ?
				present->str : "(nil)");
		present = present->next;
		node1++;
	}
	return (node1);
}
