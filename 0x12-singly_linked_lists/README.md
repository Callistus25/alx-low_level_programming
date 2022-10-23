## C - Singly linked lists

This project covers the building and using singly linked lists in `C` while learning when and why to use linked lists versus arrays.

- [lists.h](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x12-singly_linked_lists/lists.h): Header file containing definitions and prototypes for all types and functions written for the project.

## Tasks

0. Print list

	- [0-print_list.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c): C function that prints all the elements of a list_t list.
	- Prototype: `size_t print_list(const list_t *h);`
	- Return: the number of nodes
	- Format: see example
	- If `str` is `NULL`, print `[0] (nil)`
	- You are allowed to use `printf`

1. List length

	- [1-list_len.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c): C function that returns the number of elements in a linked list_t list.
	- Prototype: `size_t list_len(const list_t *h);`

2. Add node

	- [2-add_node.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c): C function that adds a new node at the beginning a of a list_t list.
	- Prototype: `list_t *add_node(list_t **head, const char *str);`
	- Return: the address of the new element, or `NULL` if it failed
	- `str` needs to be duplicated
	- You are allowed to use `strdup`

3. Add node at the end

	- [3-add_node_end.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c): C function that adds a new node at the end of a linked list_t list.
	- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
	- Return: the address of the new element, or `NULL` if it failed
	- `str` needs to be duplicated
	- You are allowed to use `strdup`

4. Free list

	- [4-free_list.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c): C function that frees a list_t list.
	- Prototype: `void free_list(list_t *head);`

5. The Hare and the Tortoise

100-first.c: C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
6. Real programmers can write assembly code in any language

101-hello_holberton.asm: 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function witout interrupts.
