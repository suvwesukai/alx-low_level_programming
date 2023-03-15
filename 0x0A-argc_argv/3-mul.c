#include <stdio.h>
#include <stdlib.h>

/**
 * main - MUltiplies two numbers
 * @argc: size of the argv
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0 (success), otherwise 1.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = (atoi(argv[1])) * (atoi(argv[2]));
	printf("%d\n", result);

	return (0);
}
