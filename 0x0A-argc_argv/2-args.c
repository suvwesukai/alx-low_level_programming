#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments, one per line
 * @argc: size of the argv
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
