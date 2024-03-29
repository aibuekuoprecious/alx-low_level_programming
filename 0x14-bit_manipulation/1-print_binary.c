#include "main.h"

/**
 * _power - Calculates the result of raising a base to a given power.
 * @base: The base of the exponent.
 * @pow: The power of the exponent.
 *
 * Return: The result of raising the base to the given power.
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}

