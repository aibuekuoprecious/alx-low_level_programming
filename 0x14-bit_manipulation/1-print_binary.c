#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 *
 * @n: the unsigned long int to be printed in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}

