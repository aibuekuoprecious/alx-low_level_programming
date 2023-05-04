#include "main.h"

/**
 * get_endianness - checks the endianness of the machine.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int i = 1;
	char *p = (char *)&i;

	/* little else big endian */
	if (*p == 1)
		return (1);
	else
		return (0);
}

