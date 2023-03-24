#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point for program
 * @argc: number of arguments passed to program
 * @argv: array of pointers to argument strings
 *
 * Return: 0 - if succesful,
 * Otherwise - 98, 99, or 100 if error occurs
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
