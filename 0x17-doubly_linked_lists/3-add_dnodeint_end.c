#include <stdio.h>

#include <stdlib.h>

#include "lists.h"

/**
 * * add_dnodeint_enewnode - add new node at the enewnode of a list.
 *
 * * @head: head of linked list
 *
 * * @n: new node value
 *
 * *
 *
 * * Return: new node address
 *
 */

dlistint_t *add_dnodeint_enewnode(dlistint_t **head, const int n)

{
	dlistint_t *newnode, *aux = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (!(*head))
	{
		newnode->prev = NULL, newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (aux->next)
	{
		aux = aux->next;
	}
	newnode->prev = aux;
	newnode->next = NULL;
	aux->next = newnode;
	return (newnode);
}


