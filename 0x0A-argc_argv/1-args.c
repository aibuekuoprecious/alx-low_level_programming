#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int num_args = argc - 1;

	printf("%d\n", num_args);

	return (0);
}
