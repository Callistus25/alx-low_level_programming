## C - More singly linked lists

This project continued the practice aof building and using singly linked lists in `C`.

- [lists.h](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/lists.h): Header file containing definitions and prototypes for all types and functions written for the project.


## Tasks

0. Print list

- [0-print_listint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c): C function that prints all the elements of a `listint_t` linked list.
	- Returns the number of nodes in the listint_t list.
	- Prototype: `size_t print_listint(const listint_t *h);`

1. List length

	- [1-listint_len.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c): C function that returns the number of elements in a `listint_t` linked list.
	- Prototype: `size_t listint_len(const listint_t *h);`

2. Add node

	- [2-add_nodeint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c): C function that adds a new node at the beginning of a `listint_t` linked list.
	- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
	- If the function fails - returns `NULL`.
	- Otherwise - returns the address of the new element.

3. Add node at the end

	- [3-add_nodeint_end.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c): C function that adds a new node at the end of a `listint_t` linked list.
	- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
	- If the function fails - returns NULL.
	- Otherwise - returns the address of the new element.

4. Free list

	- [4-free_listint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c): C function that frees a `listint_t` linked list.
	- Prototype: `void free_listint(listint_t *head);`

5. Free

	- [5-free_listint2.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c): C function that frees a `listint_t` linked list.
	- Sets the `head` to `NULL`.
	- Prototype: `void free_listint2(listint_t **head);`
6. Pop

	- [6-pop_listint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c): C function that deletes the head node of a `listint_t` linked list.
	- If the linked list is empty - returns `0`.
	- Otherwise - returns the head node's data `(n)`.
	- Prototype: `int pop_listint(listint_t **head);`

7. Get node at index

	- [7-get_nodeint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/7-get_nodeint.c): C function that returns the nth node of a `listint_t` linked list.
	- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
	- where `index` is the index of the node, starting at `0`
	- if the node does not exist, return `NULL`

8. Sum list

	- [8-sum_listint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/8-sum_listint.c): C function that returns the sum of all the data (n) of a listint_t linked list.
	- If the linked list is empty - returns `0`.
	- Otherwise - returns the sum of all the data `(n)`.
	- Prototype: `int sum_listint(listint_t *head);`

9. Insert

	- [9-insert_nodeint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/9-insert_nodeint.c): C function that inserts a new node at a given position.
	- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
	- where `idx` is the index of the list where the new node should be added. Index starts at 0
	- Returns: the address of the new node, or `NULL` if it failed
	- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

10. Delete at index

	- [10-delete_nodeint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/10-delete_nodeint.c): C function that deletes the node at a given `index` of a `listint_t` linked list.
	- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
	- where `index` is the index of the node that should be deleted. Index starts at `0`
	- Returns: `1` if it succeeded, `-1` if it failed

11. Reverse list

	- [100-reverse_listint.c](https://github.com/Callistus25/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/100-reverse_listint.c): C function that reverses a listint_t linked list using a maximum of one loop and two variables.
Returns a pointer to the first node of the reversed list.
12. Print (safe version)

101-print_listint_safe.c: C function that prints a listint_t linked list safely (ie. can free lists containing loops).
Returns the number of nodes in the listint_t list.
13. Free (safe version)

102-free_listint_safe.c: C function that frees a listint_t linked list safely (ie. can free lists containing loops).
Returns the size of the list that was freed.
Sets the head to NULL.
14. Find the loop

103-find_loop.c: C function that finds the loop contained in a listint_t linked list using a maximum of two variables.
If no loop is found - returns NULL.
Otherwise - returns the address of the node where the loop starts.



