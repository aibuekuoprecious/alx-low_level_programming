#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a node to the end of a linked list
 * @head: Double pointer to the beginning of the linked list
 * @n: Value to add to the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;

	lastNode->next = newNode;
	newNode->prev = lastNode;

	return (newNode);
}

