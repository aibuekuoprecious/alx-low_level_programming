#include "main.h"
#include <stddef.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src.
 *
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
		temp++;

	while (*src && n--)
		*temp++ = *src++;

	*temp = '\0';

	return (dest);
}

/**
 * _strncpy - Copies a string, using at most n bytes.
 *
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - Compares two strings.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 0 if the strings are equal,
 *         a negative value if s1 is less than s2,
 *         a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _strstr - Locates a substring.
 *
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: The pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack && *n && (*haystack == *n))
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
