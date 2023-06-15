#include "lists.h"

/**
 * sum_dlistint - Sums all of the data of a dlistint_t linked list
 * @head: Pointer to the beginning of the linked list
 *
 * Return: Sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
