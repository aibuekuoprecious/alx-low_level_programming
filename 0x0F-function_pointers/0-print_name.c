#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print name
 * @f: variable to hold string name
 * @name: name of person
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	/* set condition for when f/name points to/contains nothing */
	if (name != NULL && f != NULL)
		return; /* return nothing */

	/* call pointer to name string */
	f(name);
}

/**
 * print_string - Prints a string
 * @str: The string to print
 */
void print_string(char *str)
{
	printf("%s\n", str);
}

/**
 * main - Prints the name declared
 *
 * Return : 0
 */
int main(void)
{
	/* declare name */
	char name[] = "Aibueku Precious";

	print_name(name, print_string);
	return (0); /* return 0 */
}
