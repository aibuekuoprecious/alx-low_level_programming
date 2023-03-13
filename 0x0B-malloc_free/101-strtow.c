#include "main.h"
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */

static int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
			count++;

		while (str[i] && str[i] != ' ')
			i++;
	}
	return (count);
}

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: Pointer to array of words or NULL if str is NULL or empty
 */

char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k;

	if (!str || !*str)
		return (NULL);

	word_count = count_words(str);
	if (!word_count)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;

	while (i < word_count)
	{
		while (*str && *str == ' ')
			str++;

		j = 0;
		while (str[j] && str[j] != ' ')
			j++;

		words[i] = malloc((j + 1) * sizeof(char));
		if (!words[i])
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < j; k++)
			words[i][k] = str[k];
		words[i][k] = '\0';
		i++;
		str += j;
	}
	words[i] = NULL;
	return (words);
}
