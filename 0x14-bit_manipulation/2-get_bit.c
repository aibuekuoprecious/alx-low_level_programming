#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the unsigned long integer to retrieve the bit from
 * @index: the index position of the bit to retrieve
 *
 * Return: the value of the bit at the specified index position, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}

