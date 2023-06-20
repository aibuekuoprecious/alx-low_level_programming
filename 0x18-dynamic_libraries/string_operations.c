#include "main.h"

/**
 * _strlen - Computes the length of a string.
 *
 * @s: The string to be computed.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - Copies the string pointed to by src to dest.
 *
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*temp++ = *src++))
		;

	return (dest);
}

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src)
		*temp++ = *src++;

	*temp = '\0';

	return (dest);
}
