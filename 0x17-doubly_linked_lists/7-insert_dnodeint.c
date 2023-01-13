#include "lists.h"

/**
 * * insert_dnodeint_at_index - inserts a node at a given index
 * * in a doubly linked list
 * * @h: double pointer to the list
 * * @idx: index of the node to insert
 * * @n: data to insert
 * * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode;
	dlistint_t *temp = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode || !h)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			newnode->next = temp->next;
			newnode->prev = temp;
			temp->next->prev = newnode;
			temp->next = newnode;
			return (newnode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}


