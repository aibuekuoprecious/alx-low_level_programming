#include "main.h"

/**
 * _islower - Checks for a lowercase character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - Checks for an alphabetic character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a letter, 0 otherwise.
 */
int _isalpha(int c)
{
	return ((_islower(c) != 0) || (_isupper(c) != 0));
}

/**
 * _isupper - Checks for an uppercase character.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - Checks for a digit (0 through 9).
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
