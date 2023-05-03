/**
 * free_listint2 - function frees a linked list
 * @head: points to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *end_node;

	if (head == NULL)
		return;

	while (*head)
	{
		end_node = (*head)->next;
		free(*head);
		*head = end_node;
	}

	*head = NULL;
}
