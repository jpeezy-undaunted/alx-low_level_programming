#singly linked project

##Prototypes
- size_t print_list(const list_t *h);  prints all the elements of a list_t list
- size_t list_len(const list_t *h); returns the number of elements in a linked list_t list
- list_t *add_node(list_t **head, const char *str);  adds a new node at the beginning of a list_t list
- list_t *add_node_end(list_t **head, const char *str); adds a new node at the end of a list_t list.
- void free_list(list_t *head);  frees a list_t list
###Additional task without given prototypes
- Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
You are allowed to use the printf function

- Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
You are only allowed to use the printf function
You are not allowed to use interrupts
Your program will be compiled using nasm and gcc:
