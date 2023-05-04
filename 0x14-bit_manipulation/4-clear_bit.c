#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: Pointer to the number.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~(1ul << index);

	return (1);
}

