#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes a node at a specific index
 * @head: Double pointer to the linked list
 * @index: Index at which to delete the node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nodeToDelete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	nodeToDelete = *head;

	if (index == 0)
	{
		*head = nodeToDelete->next;
		if (nodeToDelete->next != NULL)
			nodeToDelete->next->prev = NULL;
		free(nodeToDelete);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (nodeToDelete->next == NULL)
			return (-1);
		nodeToDelete = nodeToDelete->next;
	}

	nodeToDelete->prev->next = nodeToDelete->next;
	if (nodeToDelete->next != NULL)
		nodeToDelete->next->prev = nodeToDelete->prev;

	free(nodeToDelete);
	return (1);
}
