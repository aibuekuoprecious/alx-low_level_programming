#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: The integer.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	return (n >= 0 ? n : -n);
}

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i])
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (sign * num);
}
