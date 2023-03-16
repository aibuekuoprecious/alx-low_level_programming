#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocate memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the new memory block
 *         NULL if new_size is zero and ptr is not NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
