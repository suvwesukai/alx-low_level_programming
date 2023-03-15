#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print name of the minimum number of coins to
 * make change for an amount of money.
 * @argc: size of the argv
 * @argv: array containing the program command line arguments
 *
 * Return: 1, if number of arguments passed is not exactly 1
 */

int main(int argc, char *argv[])
{
	int i, num;
	int coin[] = {25, 10, 5, 2, 1};
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; ((i < 5) && (num > 0)); i++)
	{
		cent = cent + (num/coin[i]);
		num %= coin[i];
	}
	printf("%d\n", cent);
	return (0);
}
