#include "main.h"
#include <stddef.h>

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 *
 * @s: The memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: The pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
		*temp++ = b;

	return (s);
}

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: The pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}

/**
 * _strchr - Locates the first occurrence of a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: The pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

/**
 * _strspn - Calculates the length of the initial segment of s
 *           which consists entirely of bytes from accept.
 *
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		for (match = 0; accept[match]; match++)
		{
			if (*s == accept[match])
			{
				count++;
				break;
			}
		}
		if (!accept[match])
			break;
		s++;
	}

	return (count);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: The pointer to the byte in s that matches one of the bytes in accept
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}

	return (NULL);
}
