#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of arguments
 * @argc: size of the argv array
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	/* suppress unused parameter warning for argv */
	(void)argv;

	if (argc == 1)
	{
		argc = 0;
	}
	else
	{
		argc--;
	}

	printf("%d\n", argc);

	return (0);
}
