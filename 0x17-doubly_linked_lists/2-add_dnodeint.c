#include "lists.h"

/**
 * * add_dnodeint - adds a new node at the beginning of a doubly linked list
 *
 * * @head: double pointer to the list
 *
 * * @n: data to insert in the new node
 *
 * *
 *
 * * Return: the address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{

	dlistint_t *newnode;

	if (!head)

		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)

		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	if (*head)
		(*head)->prev = newnode;
	*head = newnode;
	return (newnode);

}


