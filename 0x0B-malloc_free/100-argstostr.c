#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

  /* Compute the length of the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

  /* Copy the arguments to the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}

  /* Add the terminating null byte */
	str[k] = '\0';
	return (str);
}
