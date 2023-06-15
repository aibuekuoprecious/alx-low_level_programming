#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the beginning of the linked list
 * @idx: Index at which to insert the new node
 * @n: Data to enter into the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *nodeAtIndex;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		nodeAtIndex = *h;
		for (i = 0; i < idx - 1 && nodeAtIndex != NULL; i++)
			nodeAtIndex = nodeAtIndex->next;
		if (nodeAtIndex == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = nodeAtIndex;
		next = nodeAtIndex->next;
		nodeAtIndex->next = new;
	}

	new->next = next;

	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}

