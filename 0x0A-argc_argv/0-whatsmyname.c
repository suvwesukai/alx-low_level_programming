#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print name of program
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
		printf("%s\n", argv[0]);
	}
	return (0);
}
