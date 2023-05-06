#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number, or 0 if there was an error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (i = 0; b[i]; i++)
	{
		j <<= 1;
		if (b[i] == '1')
			j += 1;
	}

	return (j);
}

