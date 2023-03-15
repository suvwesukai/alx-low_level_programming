#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Print name of program
 * @argc: size of the argv
 * @argv: array containing the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		/* get the i-th argument */
		char *data = argv[i];

		/* loop through each character in the argument */
		for (j = 0; data[j] != '\0'; j++)
		{
			/* check if the current character is a digit */
			if (!(isdigit(data[j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
