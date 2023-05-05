#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or contains non-0/1 chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		j <<= 1;
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else if (b[i] == '1')
		{
			j += 1;
		}
	}

	return (j);
}

