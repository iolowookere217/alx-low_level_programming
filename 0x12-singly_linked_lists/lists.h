#ifndef LISTS_H
#define LISTS_H

/*
 * * File: lists.h
 * * Auth: Isaac O
 * * Desc: Header file containing prototypes and definitions for all functions
 * *       and types written in the 0x11-singly_linked_lists directory.
 */

#include <stdlib.h>

/**
 * * struct list_s - singly linked list
 * * @str: string - (malloc'ed string)
 * * @len: length of the string
 * * @next: points to the next node
 * *
 * * Description: singly linked list node structure
 * *              for Alx project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list;

size_t print_list(const list *h);
size_t list_len(const list *h);
list *add_node(list **head, const char *str);
list *add_node_end(list **head, const char *str);
void free_list(list *head);

#endif /* LISTS_H */

