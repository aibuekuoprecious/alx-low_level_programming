#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - Singly linked list.
 */
typedef struct listint_s
{
	int n;					/* Integer stored at the node. */
	size_t index;			/* Index of the node in the list. */
	struct listint_s *next; /* Pointer to the next node. */
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane.
 */
typedef struct skiplist_s
{
	int n;						/* Integer stored at the node. */
	size_t index;				/* Index of the node in the list. */
	struct skiplist_s *next;	/* Pointer to the next node. */
	struct skiplist_s *express; /* Pointer to the next node in the express lane. */
} skiplist_t;

/* Linear Search */
int linear_search(int *array, size_t size, int value);

/* Binary Search */
int binary_search(int *array, size_t size, int value);
int binary_search_index(int *array, size_t l, size_t r, int value);

/* Jump Search */
int jump_search(int *array, size_t size, int value);

/* Interpolation Search */
int interpolation_search(int *array, size_t size, int value);

/* Exponential Search */
int exponential_search(int *array, size_t size, int value);

/* Advanced Binary Search */
int advanced_binary(int *array, size_t size, int value);

/* Linked List Functions */
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);

/* Skip List Functions */
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);

#endif /* SEARCH_ALGOS_H */
