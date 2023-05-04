#include "main.h"

/**
 * flip_bits - returns the num of  bits to flip to get from one num to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res)
	{
		count += xor_res & 1;
		xor_res >>= 1;
	}
	return (count);
}

