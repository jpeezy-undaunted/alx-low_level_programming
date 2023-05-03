# This project is a continuation of singly linked list tagged 0x13. C - More singly linked lists

## Prototypes
- size_t print_listint(const listint_t *h); A function that prints all the elements of a listint_t list and eturns the number of nodes.
- size_t listint_len(const listint_t *h); A function that returns the number of elements in a linked listint_t list.
- size_t listint_len(const listint_t *h); A function that adds a new node at the beginning of a listint_t list, returns the address of the new element, or NULL if it failed.
- listint_t *add_nodeint_end(listint_t **head, const int n); A function that  adds a new node at the end of a listint_t list, returns the address of the new element, or NULL if it failed.
- void free_listint(listint_t *head); A function that frees a listint_t list.
- void free_listint2(listint_t **head); A function that frees a listint_t list and sets the head to NULL.
- int pop_listint(listint_t **head); A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
- listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); A function that returns the nth node of a listint_t linked list.
- listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); A function that inserts a new node at a given position.
- int delete_nodeint_at_index(listint_t **head, unsigned int index); A function that deletes the node at index index of a listint_t linked list.
- listint_t *reverse_listint(listint_t **head); A function that reverses a listint_t linked list.
- size_t print_listint_safe(const listint_t *head); A function that prints a listint_t linked list, print lists with a loop, and returns the number of nodes in the list.
- size_t free_listint_safe(listint_t **h); function that frees a listint_t list with a loop once, and the size of the list that was free’d.
- listint_t *find_listint_loop(listint_t *head); function that finds the loop in a linked list, and returns address of the node where the loop starts, or NULL if there is no loop.
